
#include<iostream>
using namespace std;
class Shape
{protected:
 double n1,n2;
public:
 void setData(int a,int b=0)
 {
  n1=a;
  n2=b;
 }
 virtual void display_area()
 {

 }
};
class Square:public Shape
{
public:
 void display_area()
 {
  cout<<"Area of Square :"<<n1*n1;
 }
};
class Parallelogram:public Shape
{
 void display_area()
 {
  cout<<"Area of Parallelogrram :"<<n1*n2;
 }
};
int main()
{
  int n;
 cout<<"1.Area of Square\n2.Area of Parallelogram\n";
 cin>>n;
 if(n==1)
 {
  Shape *s=new Square;
  s->setData(3);
  s->display_area();
 }
 if(n==2)
 {
  Shape *s=new Parallelogram;
  s->setData(2,4);
  s->display_area();
 }
}
