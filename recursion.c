//Program to find factorial of any number with or without recursion
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n , factorial,init_fact=1,i;
    int fact(int);
    printf("Please enter any number: \n");
    scanf("%d", &n);
    factorial = fact(n);
    printf("Factorial of the number is : %d\n",factorial);
    
    
    for (i=1; i<= n; i++)
         {
             init_fact*=i;
         }
         printf("Number fact from init fact:%d\n",init_fact);
         printf("Factorial of the number from for loop is : %d\n",init_fact);
         
 }

    // non recursive function of factorial
    int fact(int n){
        int res=1 , i=n;
        while (i>=1)
        {
            res=res*i;
            i--;
        }
    }

        
    
   

