#include <sys/time.h>
#include <iostream>

using std::string;

class Client{
public:
    Client();
    void setupConnection();
    void GetResponseFromServer();

private:
    //zmq::context_t context (1);
    //zmq::socket_t socket (context, ZMQ_REQ);
    struct timeval t_before, t_after;
    string replyMessage;

};