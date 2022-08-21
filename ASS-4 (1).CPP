#include<iostream.h>
#include<conio.h>

class House
{
int h,r,no;
char city[50],add[50],name[50];
public:
void input()
{
cout<<"Enter House Name=";
cin>>name;
cout<<"Enter House No=";
cin>>no;
cout<<"Enter total rooms in house=";
cin<<r;
cout<<"Address"=;
cin>>add;
cout<<"Enter city name=";
cin>>city;
}
};
void output()
{
cout<<name<<"\t"<<no<<"\t"<<r<<"\t"<<add<<"\t"<<"name"<<endl;
}
};
void main()
{
int j,h;
clrscr();
cout<<"Enter Your Details=";
cin<<n;
house h[20];
for(i=1;i<=n;i++)
{
h[i].input();
}
cout<<endl<<"House Name\tHouse No.\tRoom's\tAddress\tcity\n";
for(i=1;i<=n;i++;
{
h[i].output();
}
getch();
}





