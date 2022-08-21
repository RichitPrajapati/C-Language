#include<iostream.h>
#include<conio.h>
class unary
{
   int plus,minus;
   public:
   void setdata()
  {
   cout<<"Enter value Which increament=";
   cin>>plus;
   cout<<"Enter value Which Decreament=";
   cin>>minus;
   }
   void operator++()
   {
   plus++;
   }
   void operator--()
   {
   minus--;
   }
   void getdata()
   {
   cout<<endl<<"value of plus  after increament="<<plus<<endl;
   cout<<endl<<"value of minus after decrement="<<minus<<endl;
   }
   };
   void main()
   {
   clrscr();
   unary u;
   u.setdata();
   u.operator++();
   u.operator--();
   u.getdata();
   getch();
   }
