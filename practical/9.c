//Write a C program that stores 5 integers in a one-dimensional array and prints ??them. Extend this to handle a two-dimensional array (3x3 matrix) and
//calculate the sum of all elements.a
#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    printf("enter 5 elemnets\n");
    for(i=0; i< 5;i++)
    {
   
        scanf("%d",&arr[i]);
      
    }
      for(i=0; i< 5;i++)
    {
   
        printf("%d\t",arr[i]);
      
    }
   

    int arr2[3][3],j;
    printf("enter 3 elements in3*3 matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)


        {
            scanf("%d",&arr2[i][j]);
            sum=sum+arr2[i][j];


        }
        // printf("matrix of the 3*3 is\n");
      
    } 

        for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)


        {
         printf("%d\t",arr2[i][j]);
        }
        printf("\n");
        // printf("matrix of the 3*3 is\n");
      
    } 
    printf("SUM OF MATRIX IS %d\n",sum);
     return 0;
    
}
