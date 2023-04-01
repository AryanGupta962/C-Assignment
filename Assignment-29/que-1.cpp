#include<iostream>
using namespace std;
class Complex
{
 int a,b;
public :
 void operator=(int x)
 {
  a=x;
  b=x;

 }
 void display()
 {
  cout<<"a= "<<a<<endl;
  cout<<"b= "<<b;
 }
};

int main()
{
 Complex c1;
 int x=6;
 c1=x;
 c1.display();
}
