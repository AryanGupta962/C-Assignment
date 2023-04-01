#include<iostream>
using namespace std;
class Complex
{
int a,b;
public:
 Complex(int a,int b)
 {
  this->a=a;
  this->b=b;
 }
 friend void operator ++(Complex &c)
 {
  ++c.a;
  ++c.b;
 }
  friend void operator ++(Complex &c,int)
 {
  c.a++;
  c.b++;

 }
 void showData()
 {
  cout<<"a= "<<a<<endl<<"b= "<<b;

 }

};
int main()
{
Complex c1(3,5);
++c1;//pre
c1++;//post
c1.showData();
}
