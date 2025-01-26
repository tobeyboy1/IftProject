#include "Program_1.h"

queue<string> buffer;
mutex mx;

condition_variable is_pushed;

Program_1::Program_1(){};

bool Program_1::allIsNumbers(string& str) {
	for (char element : str) {
		if (!isdigit(element)) {
			return false;
		}
	}
	return true;
}

void Program_1::PrepareData() {

	string str;
	cout << ">> ";
	cin >> str;


	if (allIsNumbers(str) && str.length() > 0 && str.length() <= 64) {

		IftLib::StrSort(str);
		buffer.push(str);
		is_pushed.notify_one();
	}

	

	PrepareData();

}

void Program_1::ProcessData() {
	
	unique_lock<mutex> lock(mx);

	is_pushed.wait(lock, []
		{
			return !buffer.empty();
		});

	string temp_str = buffer.front(); 

	buffer.pop(); 

	std::cout << "Value: " << temp_str << endl;
	lock.unlock();

	int cvb = IftLib::SumStrElements(temp_str);
	userInput = to_string(cvb);

	sendMessage();
	ProcessData();
}

void Program_1::sendMessage(){
	int sendRes = send(sock,userInput.c_str(),userInput.size()+1,0);
	if (sendRes == -1){
		cout << "Couldn't send to server\n";
	}

	memset(buf,0,4096);
	int bytesReceived = recv(sock,buf,4096,0);
	//cout << "Server>" << string(buf,bytesReceived) << "\r\n";
}

int Program_1::SetConnection(){
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == -1){
		return -1;
	}

	port = 7777;

	ip_adress = "127.0.0.1";

	hint.sin_family = AF_INET;
	hint.sin_port = htons(port);
	inet_pton(AF_INET,ip_adress.c_str(), &hint.sin_addr);

	connectRes = connect(sock,(sockaddr*)&hint,sizeof(hint));
	if (connectRes == -1){
		return -1;
	}
	return 1;
}


Program_1::~Program_1(){ close(sock);};
	
int main(){
	Program_1 prog_run;

	if(prog_run.SetConnection() == 1){
		thread prepare_thread(&Program_1::PrepareData, prog_run);
		

		thread process_thread(&Program_1::ProcessData, prog_run);

		prepare_thread.join();
		process_thread.join();
	}

	return EXIT_SUCCESS;
}
