#include<emp.h>
int addEmpDetails(EMP *)
{
printf("\n\t Enter the details of employee:\n");
printf("\nID: ");
scanf("%d", &e->eID);
printf("\n\tName: ");
getchar();
printf("\n\tGender: ");
scanf("%c",&e->eGender);
printf("\n\tPhone: ");
scanf("%d",&e->ePhone);
printf("\n\tSalary: ");
scanf("%f",&e->esalary);
e->eActive='1';// '1' -> Active ,'0' -> inactive
}

void dispEmpAll(EMP *e, int Cap, int flag)
{
int i;
printf("\n\t Employee Details are \n");
if(flag==1)
Cap=1;
for(i=0;i<Cap;i++,e++)
{
if(e->eActive =='1'){
printf("\n\t ***********************");
printf("\n\tID: %d", e->eID);
printf("\n\tName: %s",e->eName);
printf("\n\tGender: %c",e->eGender);
printf("\n\tPhone: %d", e->ePhone);
printf("\n\tSalary: %f",e->eSalary);
printf("\n\t*************");
}
}
}
int findEmpID(EMP *e, int Cap, int_id)
{
int i;
int flag=0;
for(i=0;i<Cap;i++,e++)
{
if(e->eActive =='1'){
if(e->eID ==_id)
{
flag=1;
break;
}
}
}
if(flag==1)
return i;

return -1;
}
int findEmpName(EMP *e, int Cap, char* name);
{
int i;
int flag=0;
for(i=0;i<Cap;i++,e++)
{
if(e->eActive =='1'){
if(strcmp(e->eName, _name) ==0)
{
flag=1;
break;
}
}
}
if(flag==1)
return i;

return -1;
}
int delEmpID(EMP *e, int Cap, int_id)
{
int pos=findEmpID(e, Cap, _id);
if(pos==-1)
{
printf("\n\tNo such employee exist");
return 0;
}
				  e[pos].eActive='0';
				  return 1;


