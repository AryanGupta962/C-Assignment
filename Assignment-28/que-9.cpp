#include<iostream>
using namespace std;
class Integer
{
 int a;
public:
 void setData(int a)
 {
  this->a=a;
 }
 int getData()
 {
  return a;
 }
 void display()
 {
  cout<<"a= "<<a<<endl;
 }
 operator int()
 {
  return a;
 }
};
int main()
{
 Integer i1;
 i1.setData(5);
 i1.display();
 int b=int(i1);
 cout<<"int b= "<<b;
}
