#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,length;
    char str[50];
    printf("Enter string");
    scanf("%s",str);
    length=strlen(str);
    printf("\n");
    for ( x = 0; x < length; x++)
    {
        y=x+1;
        printf("%-length.*s\n",y,str);        
    }
    for ( x = length-1; x >= 0; x--)
    {
        y=x+1;
        printf("%-length.*s\n",y,str);
    }
    

    return 0;
}
