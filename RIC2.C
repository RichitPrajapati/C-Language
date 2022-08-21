#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the value of a:-");
scanf("%d",&a);
if(a%2==0)
{
printf(" a is odd");
printf("%d\n",a);
}
else
{
printf("a is even");
printf("%d\n",a);
}

getch();
}