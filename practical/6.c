//Write a C program to print numbers from 1 to 10 using all three types of loops(while, for, do-while).
#include<stdio.h>
int main()
{
    int i=1;
    //using while loop
    
    while (i <= 10){

    printf("%d\n",i);
    i++;
    }
  //using for loop
  printf("using for loop\n");
   for ( i = 1; i <= 10; i++)
    {
        printf("%d\n",i);
    }
    //using do while
   int j=1;
    printf("using do while loop\n");
    do
    {
        printf("%d\n",j );
        j++;
    } 
    while (j<=10);
    return 0;
  }


   
