//Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results.
#include<stdio.h>
int main()
{
    int num1, num2;
    //input two integers
    printf("enter two inntegers:");
    scanf("%d %d",&num1,&num2);
    //arithmatic operators
    printf("arithmatic operatrs:\n");
    printf("addition:%d\n",num1+num2);
    printf("substraction:%d\n",num1-num2);
    printf("multiplication:%d\n",num1*num2);
    printf("division:%d\n",num1/num2);
    printf("moduls:%d\n",num1%num2);
    //relational operators
    printf("relational operators:\n");
    printf("num1==num2:%d\n",num1==num2);
    printf("num1!=num2:%d\n",num1!=num2);
    printf("num>num2:%d\n",num1>num2);
    printf("num1<num2:%d\n",num1<num2);
    printf("num1>num2:%d\n",num1>num2);
    printf("num1<=num2:%d\n",num1<=num2);
    //logical oprators
    printf("logical operators:\n");
    printf("num1&&num2:%d\n",num1&&num2);
    printf("num1||num2:%d\n",num1||num2);
    printf("!num1:%d\n",!num1);
    printf("!num2:%d\n",!num2);
    return 0;           
}