#include "../lib/IftLibrary.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <string.h>
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>

class Program_1{
private:

    int sock;
    int port;
    string ip_adress;
    sockaddr_in hint;
    int connectRes;
    char buf[4096];
    string userInput;

    bool allIsNumbers(string& str);
    void sendMessage();

public:
    Program_1();
    int SetConnection();
    void PrepareData();
    void ProcessData();


    ~Program_1();

};