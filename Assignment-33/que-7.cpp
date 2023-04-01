#include<iostream>
using namespace std;
class Matrix
{ protected:
 int value[4];
public:
 void setData()
 {
  for(int i=0;i<4;i++)
  {
   cout<<"Enter value "<<i+1<<endl;
  cin>>value[i];
  }
 }
};
class Calculate_Determinant:public Matrix
{
public:
 void calc()
 {
  cout<<"Result ="<<value[0]*value[3]-value[1]*value[2];
 }
};
int main()
{
 Calculate_Determinant c;
 c.setData();
 c.calc();
}
