#include<conio.h>
#include<iostream.h>

void main()
{
 clrscr();
 int n,i,z=1;
 char str[20];

 cout<<"Enter Value of n=";
 cin>>n;

 for(i=0;i<n;i++)
    {
      cout<<"Enter a["<<i<<"]=";
      cin>>str[i];
     }

 for(i=0;i<n;i++)
  {
   if(str[i]>='0' && str[i]<='9')
   {
     z++;
     }
   }
 if(z!=1)
   {
    cout<<endl<<"String is Numeric";
    }
 else
   {
    cout<<endl<<"String Is not Numeric";
    }

  getch();
  }
