    #include<stdio.h>  
    #include <string.h>    
    int main(){    
      char str[100]="This is a C Programming Class";    
      char *sub;    
      sub=strstr(str,"Class");    
      printf("\nSubstring is: %s",sub);    
     return 0;    
    }    