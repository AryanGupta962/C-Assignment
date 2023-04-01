#include<iostream>
using namespace std;
class Box
{
 int length,breadth,height;
public:
 Box(int l,int b,int h)
 {
  length=l;
  breadth=b;
  height=h;
 }
 int calculate()
 {
  return (length*breadth*height);
 }

}b1(12,4,7);
int main()
{
 cout<<"Volume of box is = "<<b1.calculate();
}
