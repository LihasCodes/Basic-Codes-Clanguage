#include <stdio.h>
void main()
{
int I,J,N=3,K=0,ODD=1,SPACE;
clrscr();
SPACE=N;
for(I=1;I<=N;I++)
{
for(J=1;J<SPACE;J++)
{
printf(" ");
}
K=0;
for(J=1;J<=ODD;J++)
{
if(J<=I)
{
K++;
}
else
{
K--;
}
printf("%d ",K);
}
ODD=ODD+2;
SPACE--;
printf("\n");
}
I--;
ODD=ODD-2;
I--;
SPACE++;
ODD=ODD-2;
SPACE++;
for(;I>0;I--)
{
for(J=1;J<SPACE;J++)
{
printf(" ");
}
K=0;
for(J=1;J<=ODD;J++)
{
if(J<=I)
{
K++;
}
else
{
K--;
}
printf("%d ",K);
}
ODD=ODD-2;
SPACE++;
printf("\n");
}
getch();
}