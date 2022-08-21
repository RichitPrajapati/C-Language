#include<stdio.h>
#include<conio.h>
void main()
{
int P,Q,R;
clrscr();
printf("Enter The Value Of P and Q:-");
scanf("%d %d",&P,&Q);
R=P;
P=Q;
Q=R;
printf("After Swapping The Value:-");
printf("P=%d Q=%d",P,Q);
getch();
}