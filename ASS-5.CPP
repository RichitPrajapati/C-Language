#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[20],i,n;
clrscr();
cout<<"Enter Array=";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"] =";
cin>>a[i];
}
for(i=0;i<n;i++)
{
cout<<"a["<<i<<"]"<<sqrt(a[i])<<endl;
}
getch();
}