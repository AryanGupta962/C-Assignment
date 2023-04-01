#include<iostream>
using namespace std;
class Square
{
 public:
  int a;
  Square(int b)
  {
   a=b;
  }
  int sqrt()
  {
  return a*a;
  }
};
int main()
{
 Square a1=Square(6);
 cout<<"Square is ="<<a1.sqrt();
}
