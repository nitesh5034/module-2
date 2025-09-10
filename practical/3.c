//Write a C program that includes variables, constants, and comments. Declare and use different data types (int, char, float) and display their values.""
#include<stdio.h>
#define Pi 3.14//constant for pi
int main()
{
    //variable declarations
    int age=26; //integer variable
    char grade='a'; //character variable
    float height=5.9;//float variable

    {
        //displaying values
        printf("age: %d\n",age);
        printf("grade: %c\n",grade);
        printf("height:%f\n",height);
        printf("value of constant PI=%f\n",Pi);
        return 0;
    }
}
