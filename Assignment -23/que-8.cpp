#include<iostream>
using namespace std;
class Swapping
{
 public:
  int a,b;
  Swapping(int l,int h)
  {
   a=l;
   b=h;
  }
  int swapp()
  {
   a=a+b;
   b=a-b;
   a=a-b;

  }
};
int main()
{
 Swapping a1=Swapping(4,5);
 a1.swapp();
 cout<<"After swapping value of a="<<a1.a<<endl<<"b="<<a1.b;
}
