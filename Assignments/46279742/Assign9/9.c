/********************************************************************/
char *swap_elements(char a[][MAX_LEN],int i)
{
	char *s;
	s=(char *) malloc(20);
	strcpy(s,a[i]);
	strcpy(a[i],a[0]);
	strcpy(a[0],s);
	s=a[i];
	return s;	
}

int isVowel(char b)
{
	if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u' || b=='A' || b=='E' || b=='I' || b=='O' || b=='U')
		return 1;
	else
		return 0;
}
char*remove_vowel(char a[][MAX_LEN],int i)
{
	char *s=(char *)malloc(20);
	char d[30]="";
	int k;
	for(int j=0;j<strlen(a[i]);j++)
	{
		if(isVowel(a[i][j])==0)
		{
			s[k++]=a[i][j];
		}
	}
	strcpy(a[i],s);
	return s;
}
char* mystrcat(const char* str1, const char* str2)
{
	 int i = 0, j = 0;
	  char* result = malloc(strlen(str1) + strlen(str2) + 1); 
	    while (*str1)
		     {
			      result[i++] = *str1++; 
			        }
	     while (*str2) {
		      result[i + j++] = *str2++; 
		       }
	      result[i + j] = '\0'; 
	       return result;
}
void display(char a[][MAX_LEN])
{
	printf("\nthe contents in the array are:");
	for(int i=0;i<4-1;i++)
	{
		printf("%s\n",a[i]);
	}
}

int main()
{
	 int len;
	 char arr[][MAX_LEN]={"user1","user2","user3","user4"};
	 char str1[MAX_LEN], str2[MAX_LEN];
	 char* a1,a2;
	 while(1)
	 {
		 int c;
		 int i;
		 printf("\n1.swap elements\n2.isvowel\n3.remove vowel\n4.mystrcat\n5.display\n6.exit\n");
		 printf("\nenter the choice:");
		 scanf("%d",&c);
		 switch(c)
		 {
case1:
			 printf("enter the index:");
			 scanf("%d",&i);
			 if(i>=3)
				 printf("out of range");
			 else{
				 a1=swap_elements(arr,i);
				 printf("element at index %d is:%s",i,a1);
			 }
			 break;
case2:
			 printf("\nenter the character:");
			 char b;
			 getchar();
			 scanf("%c",&b);
			 int k=isVowel(b);
			 if(k==0)
				 printf("consonant");
			 else
				 printf("vowel");
			 break;
case3:
			 printf("enter the index:");
			 scanf("%d",&len);
			 if(len>=4)				
				 printf("out of range");
			 else{
				 a1=remove_vowel(arr,len);
				 printf("element at index %d is:%s",len,a1);
				 //arr[m]=a1;
				 }
				 break;
case4:
				 
				 a1 = str1;			   
				 a2 = str2;			 
				 getchar();
				 printf("Enter 1st string: ");
				 gets(str1);
				 printf("Enter 2nd string: ");
			         gets(str2);
			         char *s;
				 s=mystrcat(a1,a2);
				 printf("the string after concatnation:%s",s);
				 break;
case5:
				 display(arr);
				 break;
case6:
				 return 0;
default:
                               printf("wrong");
		 }
	 }
	                       return 0;
}
