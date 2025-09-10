//Write a C program to check if a number is even or odd using an if-else statement. Extend the program using a switch statement to display the month
//name based on the user’s input (1 for January, 2 for February, etc.).
#include<stdio.h>
int main()
{
    int num,month;
    //input a number
    printf("enter a number:");
    scanf("%d",&num);
    //check even or odd)
    if(num % 2 == 0)
    {
        printf("%d is even number\n",num);
    }else
    {
          printf("%d is odd number\n",num);
          
          //months check
   
    printf("enter the month number:\n");
    scanf("%d",&month);
    switch (month)
    {
   
            case 1:printf("january\n");
            break;
            case 2:printf("february\n");
            break;
            case 3:printf("march\n");
            break;
            case 4:printf("april\n");
            break;
            case 5:printf("may\n");
            break;
            case 6:printf("june\n");
            break;
            case 7:printf("july\n");
            break;
            case 8:printf("august\n");
            break;
            case 9:printf("september\n");
            break;
            case 10:printf("october\n");
            break;
            case 11:printf("november\n");
            break;
            case 12:printf("december\n");
            break;
            default:printf("invalid month\n");
            break;
    }
            
    }           
     return 0;
}
