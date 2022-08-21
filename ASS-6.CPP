#include<iostream.h>
#include<conio.h>

void main()
{
int a[20],n,i;
clrscr();

cout<<"Enter an array=";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}
cout<<"\narr\tvalue\tcube";
for(i=0;i<n;i++)
{
cout<<"\na["<<i<<"]\t"<<a[i]<<"\t"<<a[i]*a[i]*a[i];
}
getch();
}