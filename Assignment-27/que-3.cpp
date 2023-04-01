#include<iostream>
using namespace std;
class Complex
{
 int a,b;
public:
 void setvalue(int a,int b)
 {
  this->a=a;
  this->b=b;
 }
 void showData()
 {
  cout<<a<<"+"<<b<<"i";
 }
 friend Complex operator +(Complex temp1,Complex temp2)
 {
  temp1.a=temp1.a+temp2.a;
  temp1.b=temp1.b+temp2.b;
  return temp1;
 }
};
int main()
{
Complex c1,c2,c3;
c1.setvalue(3,4);
c2.setvalue(4,8);
c3=c1+c2;
 c3.showData();
}
