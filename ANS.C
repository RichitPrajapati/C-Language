#include<stdio.h>
#include<conio.h>
void main()
{
 float Salary,HRA,DA,TA,ANS;
 clrscr();
 printf("Enter the Salary-\n");
 scanf("%f",Salary);
 HRA=(Salary*0.1);
 printf("%.1f\n",HRA);
 DA=(Salary*0.05);
 printf("%.1f\n",DA);
 TA=(Salary*0.08);
 printf("%.1f\n",TA);
 ANS=Salary+HRA+DA+TA;
 printf("After Value ANS-\n");
 printf("%.1f",ANS);
 getch();
  }