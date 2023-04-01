#include<iostream>
using namespace std;
class Integer
{
 int a;
public:
 Integer(int a)
 {
  this->a=a;
 }
 int operator!()
 {
  a=-a;
  return a;
 }
 void display()
 {
  cout<<"value is = "<<a;
 }
};
int main()
{
 Integer i1(2);
 !i1;
 i1.display();
}
