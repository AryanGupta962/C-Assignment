
#include<iostream>
using namespace std;
class Time
{
 int h,m,s;
public:
 Time(int x,int y)
 {
  h=x;
  m=y;
 }
 int geth()
 {
  return h;
 }
 int getm()
 {
  return m;
 }
 void display()
 {
  cout<<"Time is : "<<h<<" hour "<<m<<" minute "<<s<<" second"<<endl;
 }
};
class Minute
{
 int m;
 public:
 void operator=(Time temp)
 {
  m=(temp.geth()*60)+temp.getm();

 }
 void display()
 {
  cout<<"minute is : "<<m<<endl;
 }
};
int main()
{
 Time t1(2,30);
t1.display();
Minute m1;
m1=t1;
m1.display();
return 0;
}
