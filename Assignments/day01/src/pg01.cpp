#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main()
{
	cout<<"Hello World!"<<endl;
	cout<<"Process ID: "<<getpid()<<endl;
	cout<<"Parent's PID: "<<getppid()<<endl;
	for(;;);
	return 0;
}