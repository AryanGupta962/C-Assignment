#include<iostream>
using namespace std;
class Invent1
{
 public:
 int a,b;
public :
 Invent1(int a,int b)
 {
  this->a=a;
  this->b=b;
 }
 operator float()
 {
  return (float)b;
 }
};
class Invent2
{
 float f;
public :
  void operator =(Invent1 temp)
 {

  f=temp.a;

 }
 void display()
 {

  cout<<"f is ="<<f;
 }

};
int main()
{
Invent1 i1(2,3);
Invent2 i2;
float f;
f=i1;
i2=i1;
i2.display();
cout<<"float = "<<f;
}
