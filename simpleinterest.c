#include<stdio.h>

int main(){
float principal, rate,simple_interest;
int time;
printf("Enter the principal amount: \n");
scanf("%f",&principal);
printf("Enter the rate of interest: \n");
scanf("%f",&rate);
printf("Enter the time in years: \n");
scanf("%d",&time);

simple_interest=(principal*rate*time)/100;
printf("The simple interest is : %f",simple_interest);
return 0;
}