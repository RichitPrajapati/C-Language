#include<stdio.h>
#include<conio.h>
#include<string.h>
#define P printf
#define S scanf
void main()
{
   char a[5],b[5];
   int i;
   clrscr();
   gets(a);
   P("\na=%s",a);
   strcpy(b,a);
   strrev(b);
   P("\nb=%s",b);
   if(strcmp(a,b)==0)
   {
   P("\n palindrome");
   }
   else
   {
   P("\n Not palindrome");
   }
   getch();
   }