#include <stdlib.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>

double f(double x)
{
    return (pow(x,4) - 23);
}

double Reg( int itr, double a, double b)
{
     int i = 0;
     double c, prev;
     while (i <= itr)
     {
	   if (f(a) * f(b) < 0)
	   {
		    c = a - ((b - a)/(f(b) - f(a)))*f(a);
	   }
	   if (f(a) * f(c) < 0)
	   {
		    b = c;
		    prev = a;
	   }
	   else
	   {
	       a = c;
	       prev = b;
	   }
	   cout << "\nIter " << i << ": x = " << c ;
	   i++;
     }
     cout<<"\nFourth root of 23 by Regula Falsi method is "<< c;

}

void  main()
 {  clrscr();
    double a, b;
    int itr;
    cout << "\nEnter number of iterations : ";
    cin >> itr;
    cout<<"\n Enter a : ";
    cin >> a;
    cout<<"Enter b : ";
    cin >> b;
    if (f(a) * f(b) < 0)
       Reg( itr, a, b);
    else
	cout << "This won't work." << endl;
   cout<<"\n\n Name : Priyanka Jindal  ";
   cout<<"\n  Branch : CSE-B";
   cout<<"\n SUB=Applied mathematics lab";
   cout<<"\n Enrollment no.=08120802714";
    getch();
}