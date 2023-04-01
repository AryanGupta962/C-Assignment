#include<iostream>
#include<cstring>
using namespace std;
class Complex
{
 int a,b;
 public:
 char *s;
public:
 Complex(int a,int b,const char *s1)
 {
  this->a=a;
  this->b=b;
  int len=strlen(s1);
  s=new char[len+1];
  strcpy(s,s1);
 }
 Complex()
 {

 }
 Complex& operator=(const Complex &c)
 {
  if(this==&c)
   return *this;

  a=c.a;
  b=c.b;
  int len=strlen(c.s);
  s=new char[len+1];
  strcpy(s,c.s);
  return *this;
 }
 void display()
 {
  cout<<"value of a="<<a<<endl;
  cout<<"value of b="<<b<<endl;
  cout<<"value of s="<<s;
 }
 ~Complex()
 {
  delete []s;
 }
};
int main()
{Complex c1(2,8,"Aryan Gupta"),c2;
c2=c1;
c2.display();



}
