#include<stdio.h>
#define PI 3.14159
static float cal_area (float radius)
{
float temp = 0.0;
temp = (PI * radius * radius);
return temp;
}
int main()
{
float radius = 0.0;
printf("Enter radius of circle\n");
scanf("%f", &radius);
if (radius < 0)
{
printf("Error: Negative values not permitted\n");
}
else
{
printf("The area of a circle of radius %f units is %f units", radius, cal_area (radius));
}
return 0;
}

	
ii
