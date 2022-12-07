#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    double d;
    printf("%d\n", argc);
    a=10;
    b=5;
    d=(b*b)-(a/2);
    printf("%d\n %d\n %f\n",a,b,d);
    return 0;
}
