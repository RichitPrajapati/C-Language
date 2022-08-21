#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("enter the value of a:-");
  scanf("%d",&a);
  if(a>='A' && a<='Z' || a>='a' && a<='z')
  {
  printf("Alphabet\n");
  printf("%c",a);
  }
  else if(a>='0' && a<='9')
  {
  printf("digit\n");
  printf("%c",a);
  }
  else
  {
  printf("special character",a);
  }
  getch();
  }






