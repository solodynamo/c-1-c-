#include<iostream.h>
#include <math.h>
#include<conio.h>
double F(double x,double y)
{ double  z=x+y*y;
  return z;
}

void main()
{
    double y0,x0,y1,n,h,f,k1,k2,k3,k4;
    clrscr();
    cout<<"\nEnter the value of x0: ";
    cin>>x0;
    cout<<"Enter the value of y0: ";
    cin>>y0;
    cout<<"Enter the value of h: ";
    cin>>h;
    cout<<"Enter the value of last point: ";
    cin>>n;
    for(; x0<n; x0=x0+h)
    {
	f=F(x0,y0);
	k1 = h * f;
	f = F(x0+h/2,y0+k1/2);
	k2 = h * f;
	f = F(x0+h/2,y0+k2/2);
	k3 = h * f;
	f = F(x0+h/2,y0+k2/2);
	k4 = h * f;
	y1 = y0 + ( k1 + 2*k2 + 2*k3 + k4)/6;
	cout<<"\n  k1 =   "<<k1;
	cout<<"\n  k2 =   "<<k2;
	cout<<"\n  k3 =   "<<k3;
	cout<<"\n  k4 =   "<<k4;
	cout<<"\n  y("<<x0+h<<") = "<<y1;
	y0=y1;
    }
   cout<<"\n\n Name : Priyanka Jindal ";
   cout<<"\n  Branch : CSE-B";
   cout<<"\n SUB=Applied mathematics lab";
   cout<<"\n Enrollment no.=08120802714";
    getch();
}