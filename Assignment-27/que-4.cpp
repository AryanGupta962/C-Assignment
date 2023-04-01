#include<iostream>
using namespace std;
class Time
{
 int hour,minute,second;
public:
 friend istream& operator >>(istream &o,Time &reff)
 {
  cout<<"Enter Hours : ";
  cin>>reff.hour;
  cout<<"Enter Minutes : ";
  cin>>reff.minute;
  cout<<"Enter Second : ";
  cin>>reff.second;
 }
 friend ostream& operator <<(ostream &o,Time &reff)
 {
  cout<<endl<<"Hours :"<<reff.hour<<endl<<"Minutes :"<<reff.minute<<endl<<"Second :"<<reff.second<<endl;
 }
 bool operator ==(Time &temp)
 {
  if(hour==temp.hour&&minute==temp.minute&&second==temp.second)
   return true;
  else
   return false;
 }
};
int main()
{
 Time t1,t2;
 cout<<"Enter First Time"<<endl<<"---------------------"<<endl;
 cin>>t1;
 cout<<endl<<"First Time";
 cout<<t1;

 cout<<endl<<"Enter Second Time"<<endl<<"---------------------"<<endl;
 cin>>t2;
 cout<<endl<<"Second Time";
 cout<<t2;


 if(t1==t2)
  cout<<endl<<"Times are same."<<endl;
 else
  cout<<endl<<"Times are not same"<<endl;
}
