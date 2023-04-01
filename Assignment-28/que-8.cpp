#include<iostream>
using namespace std;
class Coordinate
{
 int x,y,z;
public:
 void setData(int x,int y,int z)
 {
  this->x=x;
  this->y=y;
  this->z=z;

 }
 Coordinate operator,(Coordinate &c)
 {
  return c;
 }
 void display()
 {
  cout<<"x= "<<x;
  cout<<"y= "<<y;
  cout<<"z= "<<z;
 }
};
int main()
{
 Coordinate c1,c2,c3;
 c1.setData(3,4,5);
 c2.setData(6,7,8);
 c3=(c1,c2);
 c3.display();
}
