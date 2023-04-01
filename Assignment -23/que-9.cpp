#include<iostream>
using namespace std;
class Maximum
{
 public:
  int a,b;
  Maximum(int l,int h)
  {
   a=l;
   b=h;
  }
  int max()
  {
if(a>b)
 cout<<a<<" is greater";
else
 cout<<b<<" is greater";
  }
};
int main()
{
 Maximum a1=Maximum(4,5);
 a1.max();

}
