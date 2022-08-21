#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[10],i,k,j,n,z,val,pos;
clrscr();
P("Enter the size of array=");
S("%d",&n);
   for(i=0;i<n;i++)
   {
      P("Enter a[%d] = ",i);
      S("%d",&a[i]);
   }
P("\n Press 1 for insert");
P("\n Press 2 for delete");
P("\n Press 3 for update");
P("\n Enter your Choice=");
S("%d",&z);
switch(z)
{
case 1:
  for(i=0;i<n;i++)
  P("\nEnter the value of a[%d]=",i);
  S("%d",&a[i]);
  P("\nEnter the value of which you insert=");
  S("%d",&pos);
  default:
  break;
  }
  getch();
  }
