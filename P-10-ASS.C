#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int i,j,k;
clrscr();
for(i=5;i>=1;i--)
{
for(j=5;j>=i;j--)
{
P("%d",i);
}
P("\n");
}
getch();
}