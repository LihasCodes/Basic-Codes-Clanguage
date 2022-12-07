#include<stdio.h>
int main()
{
    int x,y;
    char string[]="UNIX";
    printf("\n");
   /* for ( x = 0; x < 4; x++)
    {
        y=x+1;
        printf("%-4.*s\n",y,string);        
    }
    */
    for ( x = 3; x >= 0; x--)
    {
        y=x+1;
        printf("%-4.*s\n",y,string);
    }
    

    return 0;
}
