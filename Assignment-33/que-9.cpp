
#include<iostream>
using namespace std;
class Volume
{
 protected:
 double n1,re;
public:
 void setData(int a)
 {
  n1=a;

 }
 virtual void display_volume()
 {

 }
};

class Cube:public Volume
{
public:
 void display_volume()
 {
  re=n1*n1*n1;
  cout<<"Volume of cube is : "<<re;

 }
};
class Sphere:public Volume
{
 public:
 void display_volume()
 {
  re=(4/3.0)*3.14*n1*n1*n1;
  cout<<"Volume of Sphere is : "<<re;
 }
};
int main()
{
 int n;
 cout<<"1.Volume of Cube\n2.Volume of Sphere\n";
 cin>>n;
 if(n==1)
 {
  Volume *s=new Cube;
  s->setData(3);
  s->display_volume();
 }
 if(n==2)
 {
  Volume *s=new Sphere;
  s->setData(3);
  s->display_volume();
 }
}
