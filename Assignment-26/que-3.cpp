#include<iostream>
using namespace std;
class Cube
{ int a;
public:
 Cube(int a)
 {
  this->a=a;
 }
 int Volume()
 {
  return a*a*a;
 }
};
int main()
{
 Cube c1(5);
 cout<<"Volume of a cube is ="<<c1.Volume();

}
