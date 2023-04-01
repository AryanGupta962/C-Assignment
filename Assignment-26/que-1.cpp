#include<iostream>
using namespace std;
class Complex
{
 int a,b;
 public:
 void setData(int a,int b)
 {
  this->a=a;
  this->b=b;
 }
 void showData()
 {
  cout<<"result is ="<<a<<"+"<<b<<"i";
 }
 Complex add(Complex temp)
 {
  a=a+temp.a;
  b=b+temp.b;
  return *this;
 }
};
int main()
{
 Complex c1,c2,c3;
 c1.setData(3,4);
 c2.setData(2,6);
 c3=c1.add(c2);
 c3.showData();
}
