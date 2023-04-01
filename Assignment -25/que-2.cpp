#include<iostream>
using namespace std;
class Time
{
 int hour,minute,second;
public:
 int setter_hour(int temp)
 {
  hour=temp;
 }
 int setter_minute(int temp)
 {
  minute=temp;
 }
 int setter_second(int temp)
 {
  second=temp;
 }
  void Display()
  {
   cout<<hour<<" hr "<<minute<<" min "<<second<<" sec ";

  }
};
int main()
{
 Time t1;
 t1.setter_hour(8);
 t1.setter_minute(55);
 t1.setter_second(34);
 t1.Display();

}
