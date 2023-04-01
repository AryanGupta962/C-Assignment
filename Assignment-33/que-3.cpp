#include<iostream>
using namespace std;
class A
{
 int a;
public:
 A(int a)
 {
  this->a=a;
 }
 void swapi(A &temp)
 {
  a=a+temp.a;
  temp.a=a-temp.a;
  a=a-temp.a;
 }
 void display()
 {
  cout<<"value ="<<a<<endl;
 }
};
int main()
{
 A a1(3),a2(2);
 a1.swapi(a2);
 a1.display();
 a2.display();
}
