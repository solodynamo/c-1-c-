#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
 {
    int i,j,m,n,l;
    float x[10],y[10],z[10],a[10][10],b[10],c;
    clrscr();
    cout<<"\nEnter the number of iterations : ";
    cin>>l;
    cout<<"\nEnter the right hand side constants : ";
    for(i=0;i<3;i++) {
	cin>>b[i];
    }
    cout<<"\nEnter the coefficients row wise : \n";
    for(i=0;i<3;i++) {
	for(j=0;j<3;j++) {
	    cin>>a[i][j];
	}
    }
    x[0]=y[0]=z[0]=0;
    for(i=0;i<l;i++)
    {  x[i+1]=(b[0]-a[0][1]*y[i]-a[0][2]*z[i])/a[0][0];
       y[i+1]=(b[1]-a[1][0]*x[i+1]-a[1][2]*z[i])/a[1][1];
       z[i+1]=(b[2]-a[2][0]*x[i+1]-a[2][1]*y[i+1])/a[2][2];
       cout<<"Result after iteration" <<i<<" x = "<<x[i+1]<<" y = "<<y[i+1]<<" z = "<<z[i+1]<<endl;
     }
    cout<<"\n Name : Priyanka Jindal\n Branch : CSE-B\n SUB : Applied Mathematics Lab\n Enrollment No : 08120802714";
    getch();
}
