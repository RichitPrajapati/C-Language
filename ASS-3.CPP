#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{

int i;
char str[100];
clrscr();
cout<<"Enter a String=";
cin>>str;
for(i=0;i<strlen(str);i++)
{
if (str[i]>=65 && str[i]<=92)
{
 str[i]=str[i]+32;
 cout<<str[i];
 }
 else if(str[i]>=97 && str[i]<=122)
 {
 str[i]=str[i]-32;
 }
 cout<<str[i];
}
getch();
}

