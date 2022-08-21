#include<iostream.h>
#include<conio.h>
 class choras
 {
 int length;
 private:

 public:
 void square(int l)
 {
 length=l;
 int are=l*l;
 cout<<"length="<<l;
 cout<<"\nChoras area="<<are;
 }
 };
 void main()
 {
 choras cr;
 clrscr();
 cr.square(6);
 getch();
 }