#include<iostream>
using namespace std;
class Add
{
 int a,b;
public:
 void set_a()
 {
  cout<<"Enter first number"<<endl;
  cin>>a;
 }
 void set_b()
 {
  cout<<"Enter Second number"<<endl;
  cin>>b;
 }
  int geta()
 {
  return a;
 }
 int getb()
 {
  return a;
 }

};
class user:public Add
{
 int result;
 public:
 void Addition()
 {
  set_a();
  set_b();
  result=geta()+getb();
 }
 void display()
 {
  cout<<"addition is :"<<result;
 }
};
int main()
{
 user user1;
 user1.Addition();
 user1.display();
}
