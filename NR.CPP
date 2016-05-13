#include<iostream.h>
#include<conio.h>
#include<math.h>

 float value(float x)
 {
  float y;
  y=pow(x,4)-23;
  return y;
 }
 float diffrentiation(float y)
 {
  float z;
  z=4*pow(y,3);
  return z;
  }
 void main()
 {
  clrscr();
  float r=2.5,y,y1,r1;
  for(int i=0;i<10;i++)
  {
   y=value(r);
   y1=diffrentiation(r);
   r=r-y/y1;
   }
   cout<<"\n Fourth root of 23 by Newton Raphson method is : "<<r;
   cout<<"\n Name : Priyanka Jindal\n Brach : \CSE-B\n SUB : Applied Mathematics Lab\n Enrollment No : 08120802714";
   getch();
  }



