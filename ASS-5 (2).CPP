#include<iostream.h>
#include<conio.h>
class A;
class B
{
int b;
public:

void setdata()
{
cout<<"Enter Value of b=";
cin>>b;
}
friend void sum(B b1,A a1);
};
class A
{
int a;
public:
void setdata()
{
cout<<"\nEnter Value of a=";
cin>>a;
}
void getdata()
{
cout<<"a="<<a;
}
friend void sum(B b1,A a1);
};
void sum(B b1,A a1)
{
int c;
c=b1.b+a1.a;
cout<<"\nc="<<c;
}
void main()
{
clrscr();
B b1;
A a1;
b1.setdata();
a1.setdata();
sum(b1,a1);
getch();
}