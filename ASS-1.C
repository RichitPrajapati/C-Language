#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
   int a[100],i,n;
   clrscr();
   P("Enter Size of Array=");
   S("%d",&n);
   for(i=0;i<n;i++)
    {
      S("%d",&a[i]);
    }
    P("\n Negative Elements are=");
    for(i=0;i<n;i++)
     {
     if(a[i]<0)
      {
       P("%d\t",a[i]);
      }
     }
    getch();
    }