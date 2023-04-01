#include<iostream>
using namespace std;
class Rectangle
{
 int l,w,result;
public:
 Rectangle(int a,int b)
 {
  l=a;
  w=b;
 }
 Rectangle()
 {

 }
 int area_R()
 {
  return result=l*w;
 }
 class A
 {
  int a;
 public :
  int getter()
  {
   return a;
  }
 };

};
int main()
{
 Rectangle r1(4,6);
 Rectangle::A a;
 cout<<"value is "<<a.getter();
 cout<<"Area of Rectangle is "<<r1.area_R();

}
