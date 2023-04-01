#include<iostream>
using namespace std;
class Matrix
{
 int a[3][3];
public:
 void setmatrix()
 {
  cout<<"Enter Matrix Element (3 x 3) :"<<endl;
  for(int i=0;i<3;i++)
   for(int j=0;j<3;j++)
  {
   cin>>a[i][j];
  }
 }

 void showmatrix()
 {
  for(int i=0;i<3;i++){
   for(int j=0;j<3;j++)
  {
   cout<<a[i][j]<<"    ";
  }
  cout<<endl;
 }
 }
 Matrix operator +(Matrix temp)
 {
  for(int i=0;i<3;i++)
   for(int j=0;j<3;j++)
  {
   temp.a[i][j]=temp.a[i][j]+a[i][j];
  }
  return temp;
 }

};

int main()
{
 Matrix m1,m2,m3;
 m1.setmatrix();
 m2.setmatrix();
 cout<<"First Matrix :"<<endl<<endl;
 m1.showmatrix();
 cout<<"Second Matrix :"<<endl<<endl;
 m2.showmatrix();
 m3=m1+m2;
 cout<<"Addition of Matrix :"<<endl<<endl;
 m3.showmatrix();
}
