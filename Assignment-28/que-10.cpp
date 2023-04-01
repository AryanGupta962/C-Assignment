#include<iostream>
using namespace std;
class Distance
{
 int feet,inch,a,b;
public:
 Distance()
 {

 }
 Distance(int a,int b)
 {
   this->a=a;
   this->b=b;
 }
 Distance operator()(int a,int b,int c)
 {
  Distance temp;
  temp.feet=a+c+5;
  temp.inch=a+b+15;
  return temp;
 }
 void display()
 {
  cout<<"feet ="<<feet<<endl;
  cout<<"inches ="<<inch;
 }
};

int main()
{
Distance d1(2,5);
Distance d2;
d2=d1(1,2,3);
d2.display();
}
