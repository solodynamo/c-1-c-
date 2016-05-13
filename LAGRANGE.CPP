#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int n;
  float x[20],y[20],xc,yn=1,yc=0;
  cout<<"\nEnter the no. of pairs of values : ";
  cin>>n;
  cout<<"\nEnter the values : \n";
  for(int i=0;i<n;i++)
  {
    cout<<"x"<<i+1<<" : ";cin>>x[i];
    cout<<"y"<<i+1<<" : ";cin>>y[i];
   }
  cout<<"\nEnter the value of x for which y is to be calculated : " ;
  cin>>xc;
  for(i=0;i<n;i++)
  {
  yn=1;
  for(int j=0;j<n;j++)
  {
  if(i!=j)
  yn=yn*((xc-x[j])/(x[i]-x[j]));
  }
  yc=yc+(yn*y[i]);
  }
cout<<"\n The value of y at x=9 by lagrange's interpolation method :"<<yc;
cout<<"\n\n Name: Priyanka Jindal";
cout<<"\n Branch: CSE-B";
cout<<"\n SUB: Applied Mathematics Lab";
cout<<"\n Enrollment No.: 08120802714";

  getch();
}
