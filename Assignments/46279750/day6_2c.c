/******************************************************************************************
* *
* * FILE NAME : day6_2c.c
* *
* * DESCRIPTION : This programm demonstrates the user information by using structure
* *
* * Revision History :
* * DATE          NAME            REFERENCE         REASON
* *
* * 19-11-22      SAAHERA           New             Initial creation
* * 
* * Copyright 2022, Altran Group ALL Rights Reserved
* *
*************************************************************************************
*                       STANDARD HEADER FUNCTION
**************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/***********************************************************************************
* *
* * FUNCTION NAME: struct
* *
* * DESCRIPTION : user information using structure
* *
* * RETURN: SUCCESS or FAILURE
* */
char name[30];
char gender;
int age;
float salary;
struct EmpData
{
    char Ename[30];
    char Egender;
    int Eage;
    float Esalary;
}emp;
static void get_detail()
{
    printf("Enter your Name:");
    fgets(name,30,stdin);
    printf("\nSpecify your gender: ");
    scanf("%c", &gender);
    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("\nEnter your salary:");
    scanf("%f", &salary);
}
static int display_detail()
{
    printf("\n Name: %s", name);
    printf("\n Age:%c",gender);
    if(age<01)
    {
        printf("\nEnter appropiate age!");
    }
    else
    {
       printf("\nAge:%d", age);
    }
    printf("\n Monthly salary:%2f",salary);
}
static void struct_detail()
{
    strcpy(emp.Ename,name);
    emp.Egender = gender;
    emp.Eage = age;
    emp.Esalary = salary;
}
static void struct_display()
{
    pritf("\n data in structure");
    printf("\n Name:%S",emp.Ename);
    printf("\nAge:%c", emp.Egender0;
    if(emp.Eage<0)
        printf("\nEnter appropiate age!");
    else
         printf("\nAge:%d",emo.Eage);

    printf("\nMonthly salary:%2f",emp.Esalary);

/***********************************************************************
* *
* * FUNCTION NAME: main
* *
* * DESRIPTION : this functions will call operations to perform
* *
* * RETURN: SUCCESS or FAILURE
* */
int main()
{
   ge_detail();
   display_detail();
   struct_detail();
   struct_display();
   return EXIT_SUCCESS;
}

       
