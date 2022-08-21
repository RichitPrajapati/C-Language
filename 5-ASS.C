#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int no,i,rev,sum;
clrscr();
P("Enter the no:-");
S("%d",&no);
while (no!=0)
{
i=no%10;
sum=sum*10+i;
no=no/10;
}
P("After the value:-");
P("%d",rev);
getch();
}