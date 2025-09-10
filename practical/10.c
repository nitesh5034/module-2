//Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.
#include<stdio.h>
int main()
{
   int pointer_var=10;
   int *ptr;
   {
    ptr=&pointer_var;
    printf("value of pointer_var before modification is %d\n",pointer_var);
    scanf("%d",ptr);
    printf("value of pointer_var after modification is %d\n",pointer_var);
    return 0;
   }
}