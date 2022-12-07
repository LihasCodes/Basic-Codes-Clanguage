2#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>
#define STUD 3 
void main()
{
    struct stud
    {
        char name[STUD];
        int age;
        int roll_no; 
    }s[STUD],st;
int i;
FILE *fp;

    if ((fp=fopen("sud.dat","w"))==NULL)
    {
        printf("Error while creating a file\n");
        exit(0);
    }
    for ( i = 0; i < STUD; i++)
    {
        printf("Enter Name,Age,Roll No. :\t");
        scanf("%s ,%d, %d",s[i].name,s[i].age,s[i].roll_no);
    }
    
    fwrite(s,sizeof(struct stud),STUD,fp);
    fclose(fp);

    fopen("stud.dat","r");

    while (!feof(fp))
    {
        fread(&st,sizeof(struct stud),1,fp);
        fprintf(fp,"%s,%d,%d",st.name,st.age,st.roll_no);
    }
    fclose(fp);    
    
    
}
