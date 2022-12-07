#include<stdio.h>
int main(int argc, char const *argv[])
{
int div,num,i;
printf("Enter any number: \n");
scanf("%d",&num);
for ( i = 2; i <=num; ++i)
{
    if ((num%i)==0)
    {
        printf("smallest divisor of the number %d is %d",num,i);
        break;
    }
    
}

    return 0;
}
