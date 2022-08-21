#include<iostream.h>
#include<conio.h>

class student
{
  int rollno,std;
  char name[50];

  public:
   void setdata()
   {
   cout<<"Enter Name=";
   cin>>name;
   cout<<"Enter Roll No.=";
   cin>>rollno;
   cout<<"Enter Standard=";
   cin>>std;
   }
    void getdata()
    {
    cout<<endl<<name<<"\t"<<rollno<<"\t"<<std<<endl;
    }
};
  class student1:public student
  {
  public:
  student s;
  void setdata()
  {
  s.setdata();
  }
  void getdata()
  {
  s.getdata();
  }
  };
  void main()
  {
  int i,n;
  clrscr();
  student1 sd[50];
  cout<<"Enter numner of students";
  cin>>n;
  for(i=1;i<=n;i++)
  {
  sd[i].setdata();
  }
 cout<<"Name\tRollno\tstd\n";
 for(i=1;i<=n;i++)
 {
 sd[i].getdata();
 }
 getch();
 }



