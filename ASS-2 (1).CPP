#include<iostream.h>
#include<conio.h>

class Time
{
 int h,m;
 public:

 void input()
 {
  cout<<"Enter Hour=";
  cin>>h;
  cout<<"Enter Minute=";
  cin>>m;
  }

 void output(Time t2)
 {
  int H,M,total=0;
  M=t2.m + m;
  H=t2.h + h + M/60;
  M=m%60;
 total=H+M;
 cout<<H<<"\t"<<M<<endl;

 }
 };

 void main()
 {
  clrscr();
  Time t1,t2;
  t1.input();
  t2.input();
  cout<<endl<<"Hours\tMinutes\n";
  t1.output(t2);
  getch();
  }