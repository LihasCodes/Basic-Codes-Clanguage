#include<stdio.h>
#include<conio.h>

int main(){
    int num,i;
    unsigned long long facto=1;

    printf("Enter the Number  :");
    scanf("%d", &num);
    if (num<0){
        printf("\nFactorial for this no. do not exist");
    }
    else{
        for(i=1;i<=num;++i){
            facto *= i;
        }

    }
    printf("\nFactorial of the number %d is : %llu ",num,facto);
    return 0;

}