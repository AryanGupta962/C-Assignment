#include<iostream>
using namespace std;
class Time
{
 int hour,minute,second;
 public:
 void setTime(int h,int m,int s)
 {hour=h;
  if(m<=60)
  minute=m;
  else{
    cout<<"please enter valid minutes";
     return exit(0);
  }
 if(m<=60)
  second=s;
  else {
    cout<<"please enter valid seconds";
  return exit(0);
  }

 }
 void showTime()
 {
  cout<<hour<<" hour "<<minute<<" minute "<<second<<" second"<<endl;

 }
 Time add(Time temp)
 {
  //second
  if((second+temp.second)>60){
   second=second+temp.second-60;
   minute+=1;
  }
  else
  {
   second+=temp.second;
  }
  //minute
  if((minute+temp.minute)>60){
   minute=minute+temp.minute-60;
   hour+=1;
  }
  else
  {
   minute+=temp.minute;
  }
  //hour
  hour+=temp.hour;
  return *this;
 }
};
int main()
{
 Time t1,t2,t3;
 t1.setTime(5,50,30);
 t2.setTime(7,20,34);
 t3=t1.add(t2);
 t3.showTime();
}
