#include<iostream>
using namespace std;
class Addition
{
 public:
  int x,y;
  Addition(int a,int b)
  {
   x=a;
   y=b;
  }
  int sum()
  {
  return x+y;
  }
};
int main()
{
 Addition a1=Addition(45,6);
 cout<<"Sum is="<<a1.sum();
}
