#include<stdio.h>
int main()
{
	int a[50];
	int i;
	int j;
	int s;
	int temp;
	printf("Enter size of elements: ");
	scanf("%d",&s);
	printf("Enter array elements: \n");
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++){
		 for(j=i+1;j<s;j++){
			 if(a[i]>a[j]){
				 temp=a[j];
				 a[i]=a[j];
				 a[j]=temp;
			 }
		 }
	}
	printf("array elements : \n");
	 for(i=0;i<s;i++){
		 printf("%d\t",a[i]);
	 }
	 return 0;
}

