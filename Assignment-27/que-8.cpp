#include<iostream>
using namespace std;
class Matrix
{
 int a[3][3];
public:
 void operator -()
 {
  for(int i=0;i<3;i++)
   for(int j=0;j<3;j++)
  {
   a[i][j]=-a[i][j];
  }
 }
 void getElement()
 {
  for(int i=0;i<3;i++)
   for(int j=0;j<3;j++)
  {
   cin>>a[i][j];
  }
 }

 void ShowElement()
 {  cout<<"Matrix is :"<<endl<<endl;
  for(int i=0;i<3;i++){
   for(int j=0;j<3;j++)
  {
   cout<<a[i][j]<<"     ";
  }
  cout<<endl;
  }

 }

};
int main()
{  cout<<"Enter Matrix Element(3 x 3) :"<<endl<<endl;
 Matrix m1;
 m1.getElement();
 m1.ShowElement();
 -m1;
 m1.ShowElement();
}
