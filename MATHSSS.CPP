#include<iostream.h>
#include<conio.h>
#include<math.h>
float fun(float x)
{
    return(1/(pow(x,2)+1));
}
void main()
{   clrscr();
    int i,n;
    float a,x0,xn,h,y[20],so,se,m,nm,s,ans,x[20];
    cout<<"\n Enter values of x0,xn,h: ";
    cin>>x0>>xn>>h;
    a=(xn-x0)/h;
    n=a;
    cout<<"\n n is:"<<n;
    cout<<"\n Y values: \n";
    for(i=0; i<=n; i++)
    {
	x[i]=x0+i*h;
	y[i]=fun(x[i]);
	cout<<"\n"<<y[i];
    }
    cout<<"\n The numerical integration of (1/(1+x^2)) from "<<x0<<" to "<<xn<<" is: " ;
    so=0;
    se=0;
    for(i=1; i<n; i++)
    {
	if(i%2==1)
	{
	    so=so+y[i];
	}
	else
	{
	    se=se+y[i];
	}

    }
    ans=h/3*(y[0]+y[n]+4*so+2*se);
    cout<<"\n by Simpson's one-third rule is "<<ans;
    m=0;
    nm=0;
    for(i=1; i<n; i++)
    {
	if(i%3==0)
	{
	    m+=y[i];
	}
	else
	{
	    nm+=y[i];
	}

    }
    ans=(3*h*(y[0]+y[n]+3*nm+2*m))/8;
    cout<<"\n by Simpson's three-eight rule is "<<ans;
    s=0;
    for(i=1; i<n; i++)
    {  s+=y[i];
      }
    ans=(h*(y[0]+y[n]+2*s))/2;
    cout<<"\n by Trapezoidal rule is "<<ans;
    cout<<"\n\n Name : Jeevansh\n Branch : CSE-B";
    cout<<"\n SUB : Applied Mathematics Lab\n Enrollment No : 10320802714";
    getch();
}