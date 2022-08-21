#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
int a[10],i,n,j,swap;
clrscr();
P("Enter the no.of array=");
S("%d",&n);
for(i=0;i<n;i++)
{
P("Enter the value of a[%d]=",i);
S("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
swap=a[i];
a[i]=a[j];
a[j]=swap;
}
}
}
for(i=0;i<n;i++)
{
if(i==n-2)
{
P("second largest no.is a[%d]=%d",i,a[i]);
}
}
getch();
}