#include "../lib/IftLibrary.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <string.h>

class Program_2{
private:
    
    int listening;
    sockaddr_in hint;
    sockaddr_in client;
    socklen_t clientSize;
    char host[NI_MAXHOST];
	char svc[NI_MAXSERV];
    int clientSocket;
    int result;
    char buf[4096];

public:

    Program_2();
    
    int SetConnection();
    void GettingData();

    ~Program_2();
};