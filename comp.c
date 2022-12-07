//code to compare two float values
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a=1.25;
    float b=2.25;
   /* printf("Enter value of a : \n");
    scanf("%f",&a);
    printf("Enter value of b : \n");
    scanf("%f",&b);*/
    if (a>b)
    {
        printf("a: %f is greater than b: %f",a,b);
    
    }
    else
    {
        printf("a: %f is greater than b: %f",b,a);
    }
    
    
    return 0;
}
