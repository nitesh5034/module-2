// Write a C program that defines a structure to store a student's details (name,
// roll number, and marks). Use an array of structures to store details of 3
// students and print them.
#include <stdio.h>
struct student
{
    char name[50];
    int roll_no;
    float marks;
};
int main()
{
    struct student s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("enter students name=:");
        scanf(" %s", s[i].name);
        printf("ENTER student roll no=:");
        scanf("%d", &s[i].roll_no);
        printf("enter student marks=:");
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nstudents name = %s", s[i].name);
        // printf("\n");

        printf("\nstudent roll no=%d", s[i].roll_no);

        printf("\nstudent marks = %.2f", s[i].marks);
    }
    return 0;
}