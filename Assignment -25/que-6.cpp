#include<iostream>
using namespace std;
class Square
{ public:
 static int b;
 int a;

public:
 int square()
 {
  b++;
  return a*a;

 }
 Square(int a)
 {
  this->a=a;

 }
};
int Square::b=0;

int main()
{
 Square s1(5);
 cout<<"Square of "<<s1.a<<"number is ="<<s1.square();
 cout<<endl<<"Function called "<<s1.b<<" times";
}
