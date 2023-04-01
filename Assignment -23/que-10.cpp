#include<iostream>
using namespace std;
class Square   // Array element addition program
{
 public:
  int a;
  Square(int b)
  {
   a=b;
  }

};
int main()
{
 Square a1[10]={Square(3),Square(4),Square(2),Square(1),Square(6),Square(5),Square(7),Square(8),Square(9),Square(10)};
 int x=a1[0].a+a1[1].a+a1[2].a+a1[3].a+a1[4].a+a1[5].a+a1[6].a+a1[7].a+a1[8].a+a1[9].a;
 cout<<"Addition of Array Element is ="<<x;
}
