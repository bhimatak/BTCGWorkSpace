#include <iostream>
#include <cstring>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/msg.h>
#define MAX_BUFF 1024

#define PERMS 0660

using namespace std;


int main()
{
    int msgqid;
    
    key_t key = ftok("/home/bhima/CapGAug09/msgQueueKey", 10101);
    msgqid = msgget(key, PERMS | IPC_CREAT);
    if (msgqid < 0)
    {
        perror("msgget() ");
        exit(EXIT_FAILURE);
    }
    cout << "Message queue is created with msgid : " << msgqid << endl;
    

    return 0;
}