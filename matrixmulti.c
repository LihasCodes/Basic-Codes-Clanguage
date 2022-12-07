#include<stdio.h>

int main(){
int m,n,x,y;
int i,j,k;
int mul;
printf("Enter the no. of rows of first matrix : \n");
scanf("%d",&m);
printf("Enter the no. of column of first matrix : \n");
scanf("%d",&n);
printf("Enter the no. of rows of second matrix : \n");
scanf("%d",&x);
printf("Enter the no. of column of second matrix : \n");
scanf("%d",&y);

int a[m][n],b[x][y];
printf("Enter the elements of first matrix:\n");

for ( i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}
printf("Enter the elements of second matrix:\n");
for ( i = 0; i < x; i++)
{
    for ( j = 0; j < y; j++)
    {
        scanf("%d",&b[i][j]);
    }
    
}
printf("The first matrix is :\n");
for ( i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    
}
printf("The Second matrix is :\n");
for ( i = 0; i < x; i++)
{
    for ( j = 0; j < y; j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    
}

if (n==x )
{
    int c[m][y];
    printf("Multiplication of matrices is possible\n");
printf("The multiplication of the two matrices is :\n");
for ( i = 0; i < m; i++)
{
    for ( j = 0; j < y; j++)
    {
        mul=0;
        for ( k = 0; k <n ; k++)
        {
            mul= mul+ a[i][k]*b[k][j];
        }
        
        c[i][j]=mul;
        printf("%d\t",c[i][j]);
    }
    printf("\n");
    
}
}
else
{
    printf("Multiplication is not possible\n");
}



}