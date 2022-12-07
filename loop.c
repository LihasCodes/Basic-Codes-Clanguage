#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,num;
    printf("Enter the number for pattern: \n");
    scanf("%d",&num);
    for ( i =1 ; i <=num; ++i)
    {
        printf("%d\n",i);
         for ( j = 1; j <=i; j++)
         {
            printf("%d\t",j);
         }
         
    }
    
    return 0;
}
