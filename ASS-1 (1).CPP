#include<iostream.h>
#include<conio.h>

class Distance

{
int feet,inch;
public:
void setdata()
{
cout<<"Enter feet=";
cin>>feet;
cout<<"Enter Inch=";
cin>>inch;
}
void getdata()
{
cout<<feet<<"\t"<<inch<<endl;
}
void sum(Distance d2)
{
int sum,f,i;
i=d2.inch+inch;
f=d2.feet+feet+i/12;
i= i%12;
cout<<f<<"\t"<<i;
}
};
void main()
{
clrscr();
Distance d1,d2;
d1.setdata();
d2.setdata();
cout<<"\nFeet\tInch\n";
d1.getdata();
d2.getdata();
cout<<"\nSum=\nFeet\tInch\n";
d1.sum(d2);
getch();
}





