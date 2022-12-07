#include<stdio.h>

int main(){
int a,b;
printf("Enter the values of a and b : \n");
scanf("%d %d",&a,&b);
printf("Values of a: %d and Value of b: %d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("Values of a: %d and Value of b: %d",a,b);

return 0;
}