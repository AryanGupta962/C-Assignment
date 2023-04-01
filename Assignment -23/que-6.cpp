#include<iostream>
using namespace std;
class Average
{
 public:
  int a,b,c ;
  Average(int d,int e,int f)
  {
   a=d;
   b=e;
   c=f;
  }
  float Avg3()
  {
  return a+b+c/3;
  }
};
int main()
{
 Average a1=Average(5,6,7);
 cout<<"Average is ="<<a1.Avg3();
}
