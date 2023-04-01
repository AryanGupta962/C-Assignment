#include<iostream>
using namespace std;
class Time
{
 int duration,h,m,s;
public:
 Time(int x)
 {
  duration=x;
 }

 void display()
 {
  h=duration/3600;
  m=duration%3600/60;
  s=duration%3600%60;

  cout<<"Time is : "<<h<<" hour "<<m<<" minute "<<s<<" second"<<endl;
 }
};

int main()
{
 int duration;
cout<<"Enter time duration in seconds";
cin>>duration;
Time t1(duration);
t1.display();
return 0;
}
