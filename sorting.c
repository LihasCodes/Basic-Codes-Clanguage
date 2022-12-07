#include<stdio.h>
#define SIZE 5
int main(int argc, char const *argv[])
{
    int tmp, min_pos, j;
    int i; // loop variable
    int a[SIZE]; // array declaration
    //enter the values
    for ( i = 0; i < SIZE; i++)
    {
        printf("Enter the element no. %d",i+1);
        printf("Value of the element : ");
        scanf("%d",&a[i]);
      }
        //sorting the array 
    for ( i = 0; i < SIZE; i++)
        {
            min_pos=i; 
            for ( j = i+1;j < SIZE; j++)
            {
                if (a[j]<a[min_pos])
                {
                    min_pos=j;
                    tmp=a[i];
                    a[i]=a[min_pos];
                    a[min_pos]=tmp;
                }
                
            }
            
        }
        
    
    printf("The array after sorting :\n");
    for ( i = 0; i < SIZE; i++)
    {
        printf("%d\n", a[i]);
    }
    
    
    return 0;
}
