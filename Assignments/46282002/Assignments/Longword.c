#include <Assign_1.h>
#include <stdio.h>



int long (char *Name[])
{
	int j=0;
	int len=0;
	int cn=0;
	int max=0;
	int longest[20];
	len=strlen(Name);
	int count=0;
	int i;
	int c=0;
	for(i=0;i<len;i++)
	{
		if(Name[i]==" ")
			count++;
	}
	printf("Total word in Sentence %d ",(count+1));
	for(i=0;i<len;i++)
	{
	       if(Name[i]!=" ")
		{
			cn++;
		}
	       
	       else
	       {
		       if(max<cn)
		       {

			       max=cn;
		               ind=i-max;

		       }
	       cn=0;
	       }
	       if(cn>max)
	       {
		       max=cn;
		       index=(i-max)+1;
	       }
	}
	for(i=index;i<index+max;i++)
	{
		longest[j]=Name[i];
		j++;
	}
printf("%d is the longest word %s size",max,longest);
return 0;
}
