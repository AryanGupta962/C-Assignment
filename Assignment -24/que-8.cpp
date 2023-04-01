#include<iostream>
using namespace std;
class Area
{ public:
 float FigureArea(float r)
 {
  return 3.14*r*r;
 }
 float FigureArea(float l,float w)
 {
  return l*w;
 }
};
int main()
{
  Area a1;
  cout<<"Area of Circle is ="<<a1.FigureArea(5)<<endl;
  cout<<"Area of rectangle is ="<<a1.FigureArea(8,9);
}
