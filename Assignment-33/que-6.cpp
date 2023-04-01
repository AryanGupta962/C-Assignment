#include<iostream>
using namespace std;
 class Circle
 {
   protected:
  double d1,d2;
public:
 void set_data(double a,double b=0)
 {
   d1=a;
   d2=b;
 }
  void display_area()
  {
   cout<<"Area of rectangle is : "<<3.14*d1*d1;
  }
 };
 int main()
 {
  Circle c;
  c.set_data(3.4);
  c.display_area();
 }
