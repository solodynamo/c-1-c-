#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
  float a[3][4],t;
  int k;
  cout<<"\nEnter the elements:\n";
  for(int i=0;i<3;i++)
  for(int j=0;j<4;j++)
  cin>>a[i][j];
  for(j=0;j<3;j++)
  for(i=0;i<3;i++)
  if(i!=j)
  { t=a[i][j]/a[j][j];
    for(k=0;k<4;k++)
    a[i][k]=a[i][k]-a[j][k]*t;
  }
  cout<<"\nAfter transformation:\n";
  for(i=0;i<3;i++)
  { for(j=0;j<4;j++)
    cout<<a[i][j]<<'\t';
    cout<<endl;
  }
  cout<<"\nFinal values of x,y,z respectively are:";
  for(i=0;i<3;i++)
  cout<<a[i][3]/a[i][i]<<'\t';
   cout<<"\n\n Name : Priyanka Jindal\n Branch : CSE-B";
   cout<<"\n SUB : Applied Mathematics Lab\n Enrollment No : 08120802714";
   getch();
  }