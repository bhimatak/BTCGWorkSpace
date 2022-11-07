#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc , char**argv)
{
    int i=0;
prin://capgemini.sharepoint.com/:f:/r/sites/HRWorkspace/CGEngg_TTDL/Shared%20Documents/Nalanda/C/Linux%20Fundamentals/Linux%20Commands/Introduction%20to%20Linux%20Basic%20Commands?csf=1&web=1&e=zRxeJ2"
    "
	    
	    https://capgemini.sharepoint.com/:f:/r/sites/HRWorkspace/CGEngg_TTDL/Shared%20Documents/Nalanda/C/Linux%20Fundamentals/Linux%20Commands/Introduction%20to%20Linux%20Basic%20Commands?csf=1&web=1&e=zRxeJ2"
	    ;itf("/n no of arguments :%d\n",argc);
     for(i=0;i<argc;i++)
	     printf("\n%d arguments name :%s",(i+1),argv[i]);
     
     char str[100][100],s[100]; 
     int j,n;
     printf("enter the number of names:"); 
     scanf("%d",&n);
     printf("enter names in any order:");
     for(i=0;i<n;i++)
	  {
            scanf("%s",str[i]);
	  }
	    for(i=0;i<n;i++)
	        {
                   for(j=i+1;j<n;j++)
		     {
		       if(strcmp(str[i],str[j])>0)
		         {
                             strcpy(s,str[i]);
                             strcpy(str[i],str[j]);
			     strcpy(str[j],s);
		         }
	       	    }
	     }
   printf("the sorted order of names are:");
   for(i=0;i<n;i++)
   {
	   printf("%s\n",str[i]);
   }
   return 0;
}
