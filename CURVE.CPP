#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
    clrscr();
    int n,i,j,k,x[15],y[15],sumx=0,sumy=0,sumxy=0,sumx2=0;
    cout<<"\n Enter the value of number of terms n:";
    cin>>n;
    cout<<"\n Enter the values of x:\n";
    for(i=0;i<n;i++)
    cin>>x[i];
    cout<<"\n Enter the values of y:";
    for(i=0;i<=n-1;i++)
    cin>>y[i];
    for(i=0;i<n;i++)
    {
	sumx=sumx +x[i];
	sumx2=sumx2 +x[i]*x[i];
	sumy=sumy +y[i];
	sumxy=sumxy +x[i]*y[i];

    }
  float t,a[2][3]={sumx2,sumx,sumxy,sumx,n,sumy};
  for(j=0;j<2;j++)
  for(i=0;i<2;i++)
  if(i!=j)
  { t=a[i][j]/a[j][j];
    for(k=0;k<3;k++)
    a[i][k]=a[i][k]-a[j][k]*t;
  }
  cout<<"\nThe line by curve fitting is:  y= "<<a[0][2]/a[0][0]<<"x+"<<a[1][2]/a[1][1];
  cout<<"\n\n Name: Priyanka Jindal";
  cout<<"\n Branch: CSE-B";
  cout<<"\n SUB: Applied Mathematics Lab";
    cout<<"\n Enrollment No.: 08120802714";
    getch();
}