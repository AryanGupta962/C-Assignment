#include<iostream>
using namespace std;
class Rectangle
{
 public:
 int area(int l,int w)
 {
  return l*w;
 }
 float area(int l,double w)
 {
  return l*w;
 }
 float area(double l,int w)
 {
  return l*w;
 }
 float area(double l,double w)
 {
  return l*w;
 }
};
int main()
{
 Rectangle r;
 cout<<"Area is : "<<r.area(3,7.8);
}
