#include<iostream>
using namespace std;
class Vocuboid
{
 public:
  float l,b,h;
  Vocuboid(float a,float c,float d)
  {
   l=a;
   b=c;
   h=d;
  }
  float voc()
  {
  return l*b*h;
  }
};
int main()
{
 Vocuboid a1=Vocuboid(6,7,8);
 cout<<"volume is ="<<a1.voc();
}
