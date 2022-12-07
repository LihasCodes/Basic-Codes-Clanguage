#include<stdio.h>
int main(int argc, char const *argv[])
{
        int i , j,n=3,k=0,odd=1,space;
        clrscr();
     space=n;
        for ( i =1 ; i <=n; i++)
        {
             for ( j = 1; j < space; j++)
                {
                  printf(" ");
                 }
     k=0;
        for (j = 0; j <= odd; j++)
        {
            if (j<=i)
            {
                k++;
             }
         else
            {
            k--;
            }
            printf("%d",k);

        }
        odd+=2;
        space--;
        printf("\n");
     }
     i--;
     odd=odd-2;
     space++;

                for ( ; i >0; i--)
                {
                    
                }
                

    
        return 0;
}
