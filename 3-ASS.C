include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int no,i=0;
clrscr();
P("Enter the no:-");
S("%d",&no);
while (no!=0)
{
no=no/10;
i++;
}
P("After the value:-");
P("%d",i);
getch();
}