#include<iostream>
using namespace std;
class Number
{
 int x,y,z;
public:
 Number(int a,int b,int c)
{
 x=a;
 y=b;
 z=c;
}
 void operator -()
 {
  x=-x;
  y=-y;
  z=-z;
 }
 friend ostream& operator <<(ostream &o,Number &temp)
 {
  cout<<"x = "<<temp.x<<endl<<"y = "<<temp.y<<endl<<"z = "<<temp.z;
 }

};
int main()
{
 Number n1(3,6,7);
 -n1;
 cout<<n1;
}
