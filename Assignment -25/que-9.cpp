
#include<iostream>
using namespace std;
class Circle
{
 double r,result;
public:
 Circle(float a)
 {
  r=a;
 }
 double area_R()
 {
  return result=3.14*r*r;
 }
};
int main()
{
 Circle r1(4);
 cout<<"Area of Circle is "<<r1.area_R();

}
