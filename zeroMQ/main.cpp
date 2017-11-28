#include "Client.h"

int main() {
    Client c;
    c.setupConnection();
    c.GetResponseFromServer();
    return 0;
}