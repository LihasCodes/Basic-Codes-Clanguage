#include<stdio.h>
#define SIZE 5
int main(int argc, char const *argv[])
{
    int i =0;
    int j;
    int num_list[SIZE];
    //enter element in the array
    printf("Enter any 5 Numbers: \n");
    for ( i = 0; i < SIZE; i++)
    {
    printf("Element No. : %d Value of the element = : \n", i+1);
    scanf("%d", &num_list[i]);    
    }
    
    printf("Enter number to be searched :");
    scanf("%d",&j);
    //linear search
    for ( i = 0; i < SIZE; i++)
    {
        if (j==num_list[i])
        {
            printf("The number exists in the list at the position: %d",i+1);
            return 0;
        }  
    }
     printf("Number do not exist");
    return 0;
}
