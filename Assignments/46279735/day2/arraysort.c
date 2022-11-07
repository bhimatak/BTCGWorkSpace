#include<stdio.h>
void swap(int* a, int* b);
/*function to swap *a, and *b */
void sort012(int a[], int arr_size)
{
	int low=0;               //sort the input array,the array is assumed to
	int high=arr_size;         //have values in{0,1,2}
	int mid=0;
	while(mid <=high){
		switch(a[mid]){
		case 0:             //if the element is 0
		     swap(&a[low++], &a[mid++]);
		     break;
	        case 1:             //if element is 1
		     mid++;
		     break;
		case 2:               //if element is 2
		     swap(&a[mid], &a[high]);
		     high--;
		     break;
		 }
	}
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
        *b = temp;	
}
void printArray(int arr[], int arr_size)
{
	int i;
	for(i=0; i < arr_size; i++)
		printf("%d ",arr[i]);
}
/* program to test*/
int main()
{
	int arr[] = {0,1,1,2,0,1,0,0,2};
	int arr_size = sizeof(arr) /sizeof(arr[0]);
	int i;
	sort012(arr,arr_size);
	printArray(arr,arr_size);
	getchar();
	return 0;
}
