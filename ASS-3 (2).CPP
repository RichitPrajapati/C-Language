#include<iostream.h>
#include<conio.h>
#include<string.h>

class hotel
{
 int id,staff_size,room_size,est_year,rating_type;
 char name[50],address[50],website[50];
 public:
 void setdata(int id,char name[],char address[],int staff_size,int room_size,int est_year,int rating_type,char website[])
 {
 this->id=id;
 this->staff_size=staff_size;
 this->est_year=est_year;
 this->rating_type=rating_type;
 this->room_size=room_size;
 strcpy (this->name,name);
 strcpy (this->address,address);
 strcpy (this->website,website);
 }
 void getdata()
 {
 cout<<endl<<id<<" "<<name<<" "<<staff_size<<" "<<room_size<<" "<<est_year<<" "<<rating_type<<" "<<website<<endl;
 }
 };
 void  main()
 {
 clrscr();
 hotel H;
 cout<<endl<<"ID Name Address Staff_Size Room_size est_Year Rating Website"<<endl;
 H.setdata(1,"Geetha Refreshment","Bhatar,Surat",150,210,2021,5,"geethahotel.com");
 H.getdata();
 getch();
 }
