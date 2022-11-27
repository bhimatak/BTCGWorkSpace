#include<stdio.h>/* Header file */
#include<stdlib.h>/* Header file */
#include<string.h>/* Header file */
#define MAX 80/* macro */
char longest[MAX];
int words_tot = 0;
int line_count = 0;
int tot_words(char *filename)
{
    char ch;  
    FILE *file;  

    file = fopen(filename,"r");  
    while((ch = fgetc(file)) != EOF){  
          if(ch ==' ' || ch == '\n')  
            words_tot++;  
    } 
    fclose(file);
    return words_tot;
}
char display(char *filename)
{
    FILE *fptr;
    char c;

    fptr = fopen(filename, "r");
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
}
char *longest_line(char *filename)
{
    FILE *fp;
    char str[MAX];
    int len=0;
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Error");
        return 0;
    }
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        if(len<strlen(str))
        {
            strcpy(longest,str);
            len=strlen(str);
        }
    }
    return longest;
}
int total_lines(char *filename)
{
    char ch;  
    FILE *file;  

    file = fopen(filename,"r");  
    if ( file != NULL )
    {
        char line[1000];
        while (fgets(line, sizeof line, file) != NULL)
        {
            line_count++;
        }
    }
    fclose(file);
    return line_count;
}
char append_last_line(char *filename)
{
    FILE *fps;
    FILE *fpr;

    printf("\nAppending..on %d line",line_count);
    fps = fopen(filename,"r");
    fpr = fopen("write_data.txt", "w");
    if (fpr == NULL) 
    {
        puts("Not able to open this file");
        fclose(fpr);
        exit(1);
    }
    if ( fps != NULL )
    {
        int ll = 1 ;
        char line[1000];
        while (fgets(line, sizeof line, fps) != NULL)
        {
            if(ll == line_count)
            {
                fputs(line,fpr);
                fprintf(fpr,"\n");
            }
            ll++;
        }
    }
    else
    {
        printf("File error!");
        fclose(fps);
    }
    fclose(fps);
    fclose(fpr);
}
char copy_data(char *filename)
{
    FILE *fps;
    FILE *fpr;
    char data[MAX];


    fps = fopen(filename,"r");

    if (fps == NULL) 
    {
        puts("cannot open this file");
        exit(1);
    }
    fpr = fopen("write_data.txt", "a");
    if (fpr == NULL) 
    {
        puts("Not able to open this file");
        fclose(fpr);
        exit(1);
    }

    if ( fps != NULL )
    {
        int ll = 1;
        char line[1000];
        while (fgets(line, sizeof line, fps) != NULL)
        {
            if(ll != line_count)
            {
                fputs(line,fpr);
            }
            else
            {
                continue;
            }            
            ll++;    
        }
    }
    
   fclose(fps);
   fclose(fpr);

}
int main(int argc, char const *argv[])
{
    char filename[MAX];

    printf("Enter the filename to open: \n");
    scanf("%s", filename);
    
    printf("\nTotal words in the file are : %d\n",tot_words(filename));
    printf("\nThe data in the file is :\n");
    display(filename);
    printf("\nThe longest line in the file is : %s",longest_line(filename));
    printf("\nTotal number of lines in the file are :%d",total_lines(filename));
    append_last_line(filename);
    copy_data(filename);

    return EXIT_SUCCESS;
}
	

