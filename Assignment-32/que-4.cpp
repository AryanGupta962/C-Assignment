#include<iostream>
using namespace std;
class Addition
{
public:
 int add(int a,int b,int c=0)
 {

  return a+b+c;
 }
 int add(double a,int b,int c=0)
 {

  return a+b+c;
 }
 int add(double a,double b,int c=0)
 {

  return a+b+c;
 }
 int add(double a,double b,double c=0)
 {

  return a+b+c;
 }
};
int main()
{
 Addition a;
 cout<<"Addition is "<<a.add(2,4,7);
}
