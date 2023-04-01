#include<iostream>
using namespace std;
class Shape
{
 float l,w,r,result;
public:
 Shape(float a,float b)
 {
  l=a;
  w=b;
 }
 Shape(float a)
 {
  r=a;
 }
 float area_square()
 {
  return result=l*w;
 }
 float area_rectangle()
 {
  return result=l*w;
 }
 float area_circle()
 {
  return result=3.14*r*r;
 }
};
int main()
{
 Shape s1((float)4);
 //cout<<"Area of Rectangle is "<<s1.area_rectangle();
 cout<<"Area of Cicle is "<<s1.area_circle();

}

