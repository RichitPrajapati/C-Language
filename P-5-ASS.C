#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
P("%d",j);
}
P("\n");
}
getch();
}