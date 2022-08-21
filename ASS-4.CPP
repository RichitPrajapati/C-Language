#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch;
clrscr();
cout<<"Enter Your Character=";
cin>>ch;
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
cout<<"It's Vowel";
}
else
{
cout<<"it's consonent";
}
getch();
}