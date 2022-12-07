#include<stdio.h>

int main(){
int m,n;
int i,j;
printf("Enter the no. of rows of matrix : \n");
scanf("%d",&m);
printf("Enter the no. of column of matrix : \n");
scanf("%d",&n);

int a[m][n],b[m][n],c[m][n];
printf("Enter the elements of first matrix:\n");

for ( i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&a[i][j]);
    }
    
}
printf("Enter the elements of second matrix:\n");
for ( i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
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
for ( i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
    
}
printf("The sum of the two matrices is :\n");
for ( i = 0; i < m; i++)
{
    for ( j = 0; j < n; j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        printf("%d\t",c[i][j]);
    }
    printf("\n");
    
}

}