#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=5;i++)
{
for(k=1;k<6-i;k++)
{
P(" ");
}
for(j=6-i;j<=5;j++)
{
P("%d",j);
}
P("\n");
}
getch();
}