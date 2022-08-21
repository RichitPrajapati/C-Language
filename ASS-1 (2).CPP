#include<iostream.h>
#include<conio.h>

class Employee
{
   int id,salary,exp,contact;
   char name[20],role[20],address[20],email[20];

   public:
   void setdata()
  {
   cout<<"Enter Employee ID No.=";
   cin>>id;
   cout<<"Enter Name Of Employee =";
   cin>>name;
   cout<<"Enter contact No. of Employee=";
   cin>>contact;
   cout<<"Enter Role Of Employee=";
   cin>>role;
   cout<<"Enter Experiance Of Employee=";
   cin>>exp;
   cout<<"Enter Salary Of Employee=";
   cin>>salary;
   cout<<"Enter Employee Address=";
   cin>>address;
   cout<<"Enter Employee Email ID=";
   cin>>email;
   }
   void getdata()
   {
    cout<<id<<"\t"<<name<<"\t"<<contact<<"\t"<<role<<"\t"<<exp<<"\t"<<salary<<"\t"<<address<<"\t"<<email<<endl;
   }
 };
   void main()
   {
   int i,n;
   clrscr();
   Employee e[20];
   cout<<endl<<"How Many Records You want to insert=";
   cin>>n;
   for(i=1;i<=n;i++)
   {
   e[i].setdata();
   }
   cout<<endl<<"id\tname\tcontact\trole\texp\tsalary\taddress\temail\n";
   for(i=1;i<=n;i++)
   {
   e[i].getdata();
   }
   getch();
   }

