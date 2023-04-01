
#include<iostream>
using namespace std;
class Proof
{protected:
 int h,b,p;
 public:
 void setData(int a,int b,int c)
 {
  this->h=a;
  this->b=b;
  this->p=c;
 }
};
class Compute:public Proof
{
public:
 void calc()
 {
  if(h*h==b*b+p*p)
   cout<<"YEs it is Right angled Triangle";
  else
   cout<<"No it is Not Right angled Triangle";

 }

};
int main()
{
 Compute c;
 c.setData(8,5,6);
 c.calc();
}
