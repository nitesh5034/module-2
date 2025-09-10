//Write a C program to create a file, write a string into it, close the file, then open the file again 
//to read and display its contents.
#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    //create write file
    fp = fopen("file.txt","w");
    if (fp==(NULL))
    {
        printf("file not created");
    }
    else
    {
        fputs("HELLOOO I AM NITESH....",fp);
        
        fclose(fp);
    }   
    fp=fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("ERROR");
    }
    else
    {
        while((ch=fgetc(fp))!=EOF)
        {
            printf("%c",ch);
        }
    }
    fclose(fp);
}
    