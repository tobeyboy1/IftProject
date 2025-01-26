#include "Program_2.h"

Program_2::Program_2(){};

int Program_2::SetConnection(){

	listening = socket(AF_INET, SOCK_STREAM, 0);
	if (listening == -1){
		cout << "Can't create a socket";
		return -1;
	}

	hint.sin_family = AF_INET;
	hint.sin_port = htons(7777);
	inet_pton(AF_INET,"0.0.0.0", &hint.sin_addr);

	if (bind(listening,(sockaddr*)&hint, sizeof(hint))== -1){
		cout<<"Can't bund to IP/port";
		return -1;
	}

	cout<<"Waiting connection..."<<endl;

	if(listen(listening,SOMAXCONN)==-1){
		cout<<"Can't listen";
		return -1;
	}


	clientSize = sizeof(client);

	clientSocket = accept(listening, (sockaddr*)&client, &clientSize);

	if (clientSocket == -1){
		cout << "Problem with client connecting";
		return -1;
	}

	close(listening);

	memset(host,0,NI_MAXHOST);
	memset(svc, 0, NI_MAXSERV);

	result = getnameinfo((sockaddr*)&client,clientSize,host,NI_MAXHOST, svc, NI_MAXSERV,0);

	if (result){
		cout<< host << " connected on " << svc << endl;
	}
	else{
		inet_ntop(AF_INET,&client.sin_addr,host,NI_MAXHOST);
		cout<< host << " connected on" << ntohs(client.sin_port) << endl;
	}
	return 1;
};

void Program_2::GettingData(){
	while (true){

		memset(buf,0,4096);

		int bytesRecv = recv(clientSocket, buf, 4096, 0);

		if (bytesRecv == -1){
			cerr << "There was a connection issue" << endl;

		}
		if (bytesRecv == 0){
			cerr << "The client disconnected" << endl;

		}
		int msg = stoi(string(buf, 0, bytesRecv));
		
		if (IftLib::CheckInt(msg)){
			cout << "Accepted number: " << msg << endl;
		}
		else{
			cout<<"Error: wrong number"<<endl;
		}

		send(clientSocket,buf,bytesRecv +1, 0);

	}
};

Program_2::~Program_2(){ close(clientSocket); }

int main()
{
	Program_2 prog_run;
	if(prog_run.SetConnection()){
		prog_run.GettingData();
	}
	return 0;
}