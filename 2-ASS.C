#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a=1,no,mul;
clrscr();
P("Enter the value of no:-");
S("%d",&no);
while (a<=10)
{
mul=a*no;
P("%d*%d=%d\n",a,no,mul);
a++;
}
getch();
}
