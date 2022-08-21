#include<iostream.h>
#include<conio.h>

class	Distance
{
int KM,M;
public:

void setdata()
{
cout<<"Enter Kilometer=";
cin>>KM;
cout<<"Enter Meter=";
cin>>M;
cout<<endl;
}
void operator+(Distance D1)
{
int km,m,c;
m=D1.M+M;
km=D1.KM+KM;
m=m%1000;
c=km+m;
cout<<km<<"Kilometer= "<<endl<<m<<"Meter="<<endl;
}
};
void main()
{
clrscr();
Distance D,D1;
cout<<"Enter 1st Distance"<<endl;
D.setdata();
cout<<"Eneter  2nd Distance"<<endl;
D1.setdata();
D.operator+(D1);
getch();
}