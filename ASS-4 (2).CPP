#include<iostream.h>
#include<conio.h>

class Highschool
{
int id,roll,std,age,contact;
char name[50],schoolname[50],address[50];
static int count;
public:
void setdata()
{
  cout<<"Enter student's ID=";
  cin>>id;
  cout<<"Enter student's Roll No.=";
  cin>>roll;
  cout<<"Enter student's Name=";
  cin>>name;
  cout<<"Enter student's contact no=";
  cin>>contact;
  cout<<"Enter student Age=";
  cin>>age;
  cout<<"Enter student's Addres=";
  cin>>address;
  cout<<"Enter School Name=";
  cin>>schoolname;

}

void getdata()
{
cout<<endl<<id<<"\t"<<roll<<"\t"<<name<<"\t"<<contact<<"\t"<<age<<"\t"<<address<<"\t"<<schoolname<<endl;
}
void kcount()
{
cout<<endl<<"Total Records in High School are="<<count<<endl;
 }
 };
 int Highschool::count;
 class college
 {
int id,roll,std,age,contact;
char name[50],collegename[50],address[50];
static int count1;
public:
void setdata()
{

  cout<<"Enter student's ID=";
  cin>>id;
  cout<<"Enter student's Roll No.=";
  cin>>roll;
  cout<<"Enter student's Name=";
  cin>>name;
  cout<<"Enter student's contact no=";
  cin>>contact;
  cout<<"Enter student Age=";
  cin>>age;
  cout<<"Enter student's Addres=";
  cin>>address;
  cout<<"Enter College Name=";
  cin>>collegename;
  }
  void getdata()
  {
  cout<<endl<<id<<"\t"<<roll<<"\t"<<name<<"\t"<<contact<<"\t"<<age<<"\t"<<address<<"\t"<<collegename<<endl;
  }
  void setdata1()
  {
  cout<<endl<<"Total records in college are="<<count1;
  }
  };
  int college:: count1;
  void main()
  {
  clrscr();
  Highschool h;
  college c;
  cout<<endl<<"\tEnter High School Data\n"<<endl;
  h.setdata();
  cout<<endl<<"id\tRollNo\tName\tContact\tAge\tAddress\tHighschool Name"<<endl;
  h.getdata();
  h.kcount();
  cout<<endl<<"Emter College Student's Data="<<endl;
  c.setdata();
  cout<<endl<<"id\tRollNo\tName\tContact\tAge\tAddress\tcollegeschool Name"<<endl;
  c.getdata();
  c.setdata();
  getch();
  }
