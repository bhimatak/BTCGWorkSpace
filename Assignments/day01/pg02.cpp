#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main()
{
	cout<<"Before fork() Process ID: "<<getpid()<<endl;
	cout<<"Before fork() Parent's PID: "<<getppid()<<endl;

	fork();
	fork();
	fork();
	// cout<<"Process ID: "<<getpid()<<endl;
	// cout<<"Parent's PID: "<<getppid()<<endl;
	cout<<"Hello World!"<<endl;
	return 0;
}
