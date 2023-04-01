#include<iostream>
using namespace std;
class Area
{
 double area;
public:
 Area(double r)
 {
  area=3.14*r*r;
 }
 Area(double l,double w)
 {
  area=l*w;
 }
 Area(int base,double ph)
 {
  area=(1/2)*base*ph;
 }
 double getarea()
 {
  return area;
 }
};
int main()
{
 Area a(2);
 cout<<"Area is ="<<a.getarea();
}
