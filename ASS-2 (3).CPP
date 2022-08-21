#include<iostream.h>
#include<conio.h>

class Binary
{
int a;
public:
void setdata()
{
cout<<"Enter value of a=";
cin>>a;
}
operator+(Binary B1)
{
int c;

c=a+B1.a;
cout<<c;
}
};
void main()
{
clrscr();
Binary B,B1;
B.setdata();
B1.setdata();
cout<<endl<<"Sum of Two Obejects=";
B.operator+(B1);
getch();
}