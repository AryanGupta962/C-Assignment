#include<iostream>
using namespace std;
class Time
{
public :
 int hour,minute;
 Time(int a,int b)
 {
  hour=a;
  minute=b;
 }
 Time()
 {

 }
 Time operator +(int a)
 {
  hour+=a;
  return *this;
 }
 friend Time operator +(int a,Time t1);

 friend ostream& operator <<(ostream &os,Time t1)
 {
  cout<<"Time is ="<<t1.hour<<":"<<t1.minute;
  return os;
 }
};
Time operator +(int a,Time t1)
 {
  t1.hour+=a;
  return t1;
 }
int main()
{
Time t1(5,6),t2;
t2=4+t1;
//t1.hour=10;
//t1.minute=8;
cout<<t2<<endl<<t1;
}
