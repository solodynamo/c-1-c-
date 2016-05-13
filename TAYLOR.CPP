#include<conio.h>
#include<iostream.h>
#include<math.h>

void func(float x, float y, float *f, float *f1, float *f2)
 {
  *f=2*y+3*exp(x);
  *f1=2*(*f)+3*exp(x);
  *f2=2*(*f1)+3*exp(x);
 }

void main()
 {
  clrscr();
  float x0, y0, y, h, f, f1, f2;
  cout<<"\nEnter the value of x0:";
  cin>>x0;
  cout<<"Enter the value of y0:";
  cin>>y0;
  func(x0,y0,&f,&f1,&f2);
  cout<<"Enter the value of x for which y is to be calculated:";
  cin>>h;
  y=y0+h*(f)+(pow(h,2)*f1)/2+(pow(h,3)*f2)/6;
  cout<<"\nThe value of dy/dx = 2y+3e^x by Taylor series method is:"<<y;
  cout<<"\n Name: Priyanka Jindal";
  cout<<"\n Branch: CSE-B";
  cout<<"\n SUB: Applied Mathematics Lab";
  cout<<"\n Enrollment No.: 08120802714";
  getch();
 }
