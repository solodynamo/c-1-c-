#include<iostream.h>
#include<conio.h>
#include<math.h>

 float value( float x)
 {
  float y;
  y=pow(x,4)-23;
  return y;
  }
 void main()
 {
  float x1=2.0,x2=3.0,x3,y;
  int i;
  clrscr();
  for(i=0;i<9;i++)
  {
   x3=(x1+x2)/2;
   y=pow(x3,4)-23;
   if(y<0)
    x1=(x3+x2)/2;
   else
    x2=(x1+x3)/2;
   }
   cout<<"\n The value of fourth root of 23 by bisection method is : "<<x3;
   cout<<"\n Name : Priyanka Jindal\n Brach : \CSE-B\n SUB : Applied Mathematics Lab\n Enrollment No : 08120802714";
 getch();
 }
