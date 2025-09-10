//Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.
#include<stdio.h>
int factorial(int n);//fnction declaration
int main()
{
    int num,fact=1;
    printf("enter a number");
   scanf("%d",&num);
   for(int i=1; i<=num; i++)
   {
    fact=fact*i;
   }
   printf("factorial of %d is %d",num,fact);
   return 0;
   
}