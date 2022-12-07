#include<stdio.h>
#define SIZE 2
struct student 
{
    int roll_no;
    char name[20];
    char course[20];
    int marks_obtained;

};
int main(int argc, char const *argv[])
{
    struct student stud[SIZE];
    int i;
    printf("Enter the data one by one  : \n");
    // entering the data 
    for ( i = 0; i <=SIZE-1; i++)
    {
        printf("Enter the roll no. of %d student: ",i+1);
        scanf("%d",&stud[i].roll_no);
        printf("Enter the name of %d student: ",i+1);
        scanf("%s",&stud[i].name);
        printf("Enter the course of %d student: ",i+1);
        scanf("%s",&stud[i].course);
        printf("Enter the marks obtained of %d student: ",i+1);
        scanf("%d",&stud[i].marks_obtained);
        printf("\t-----------------------------------------------------------------------------------------\n");

    }
    // printing the data 
    printf("The data entered is as followed\n");
    for ( i = 0; i <= SIZE-1; i++)
    {
        printf("The roll number of %d student is %d\n",i+1,stud[i].roll_no);
        printf("The name of %d student is %s\n",i+1,stud[i].name);
        printf("The course of %d student is %s\n",i+1,stud[i].course);
        printf("The marks obtained of %d student is %d\n",i+1,stud[i].marks_obtained);
    }
    
    return 0;
}

