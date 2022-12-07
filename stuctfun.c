#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    char course[20];
    int subject[3];
};
int main(int argc, char const *argv[])
{
    struct student stud[5];
    int i,j;
    printf("Enter data for all students:\n");
    for ( i = 0; i < =4; i++)
    {
        printf("Enter the roll no. of %d student: ",i+1);
        scanf("%d",&stud[i].roll_no);
        printf("Enter the name of %d student: ",i+1);
        scanf("%s",&stud[i].name);
        printf("Enter the course of %d student: ",i+1);
        scanf("%s",&stud[i].course);
        for ( j = 0; j <= 2; j++)
        {
        printf("Enter the marks obtained of %d subject of student %d: ",i+1,j+1);
        scanf("%d",&stud[i].subject[j]);
        printf("\t-----------------------------------------------------------------------------------------\n");
            
        }
        

    }
    // printing the data 
    printf("The data entered is as followed\n");
    for ( i = 0; i <= SIZE-1; i++)
    {
        printf("The roll number of %d student is %d\n",i+1,stud[i].roll_no);
        printf("The name of %d student is %s\n",i+1,stud[i].name);
        printf("The course of %d student is %s\n",i+1,stud[i].course);
        for ( j = 0; j <= 2; j++)
        {
        printf("The %d student's marks of %d subject are %d\n",i+1,j+1,stud[i].subject[j]);
            
        }
        
    }
    return 0;
}
