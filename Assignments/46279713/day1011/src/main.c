#include<common.h>
#include<emp.h>
int main()
{
EMP *e;
int NoOfEmps=0;
int i;
int pos=0;
int retValue=0;
dispWelcome();
printf("\n\t Enter the no of employess:");
scanf("%d",&NoOfEmps);
e=(EMP *)malloc(NoOfEmps*sizeof(EMP));
for(i=0;i<NoOfEmps;i++,e++)
addEmpDetails(e);

}

