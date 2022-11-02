#include <iostream>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

using namespace std;

int main()
{
    int semid, nsems;
    key_t key = (key_t)0x21; // ftok("SemFile", 10001);
    nsems = 25;
    semid = semget(key, nsems, IPC_CREAT | 0666);
    if (semid < 0)
    {
        perror("semget() ");
        exit(EXIT_FAILURE);
    }
    cout << "1st Semaphore is created with ID: " << semid << endl;

    

    return 0;
}
