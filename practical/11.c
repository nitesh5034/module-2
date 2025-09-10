//Write a C program that takes two strings from the user and concatenates them
//using strcat(). Display the concatenated string and its length using
//strlen().
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],str3[200];
    int len;
    printf("enter first string:");
    scanf("%s",str1);
    printf("enter second string:");
    scanf("%s",str2);
    strcpy(str3,str1);
    strcat(str3,str2);
    len=strlen(str3);
    printf("concated string:%s\n",str3);
    printf("length of concated string:%d\n",len);
    return 0;
    
}
