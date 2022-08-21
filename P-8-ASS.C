#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int i,j;
clrscr();
for(i=45;i<=49;i++)
{
for(j=45;j<=i;j++)
{
P("%d",j);
}
P("\n");
}
getch();
}