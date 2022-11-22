#include<stdio.h>
#include<string.h>
void swap(char* x,char* y){
	char t;
	t=*x;
	*x=*y;
	*y=t;
}
int partition(char a[],int first, int last){
	int i,j;
	char x;
	x=a[last];
	i=first-1;
	for(j=first;j<last;j++){
		if(a[j]<=x)
		{
			i=i+1;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[last]);
	return i+1;
}
void quicksort(char a[],int first,int last){
	int pi;
	if(first<last){
		pi=partition(a,first,last);
		quicksort(a,first,pi-1);
		quicksort(a,pi+1,last);
	}
}
void main(){
	char a[20][100];
	int n,i,first=0,last,size;
	printf("Enter the number of string you want to store: ");
	scanf("%d",&size);
	printf("Enter %d strings",size);
	for(i=0;i<=size;i++)
	{
		fgets(a[i],100,stdin);
		last=strlen(a[i])-2;
		quicksort(a[i],first,last);
	}
	printf("\nsorted strings are:");
	for(i=0;i<5;i++)
		printf("%s",a[i]);
}

