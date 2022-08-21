#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int no,i,fact=0;
clrscr();
P("Enter the no:-");
S("%d",&no);
while (no!=0)
{
fact=fact*no;
no--;
}
P("After the value:-");
P("%d",fact);
getch();
}