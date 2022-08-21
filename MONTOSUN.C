#include<stdio.h>
#include<conio.h>
void main()
{
   char choice;
   clrscr();
   printf("press M for Monday\n press Tu for tuesday\n press W for Wednesday\n press Th for Thursday\n press F for Friday\n press Sa for Saturday\n press Su for Sunday\n");
   scanf("%c",&choice);
   switch(choice)
   {
   case'm':
   printf("monday");
   break;
   case't':
   printf("tuesday");
   break;
   case'w':
   printf("wednesday");
   break;
   case'th':
   printf("thursday");
   break;
   case'f':
   printf("friday");
   break;
   case'Sa':
   printf("saturday");
   break;
   case'Su':
   printf("sunday");
   break;

   default:
   printf("enter invalid character");
   }





   getch();
}
