
#include<iostream>
using namespace std;
class Complex
{
 int a,b;
public :
 void setData(int x,int y)
 {
  a=x;
  b=y;
 }
// void operator=(int x)
// {
//  a=x;
//  b=x;
//
// }
 operator int()
 {

  return a;
 }
 void display()
 {
  cout<<"a= "<<a<<endl;
  cout<<"b= "<<b;
 }
};

int main()
{
 Complex c1;
 c1.setData(3,4);
 int x;
 //c1=x;
 x=c1;
 c1.display();
}
