#include<iostream>
using namespace std;
class child;
class base
{ public:
  int x;
 friend void swapi(base &b,child &c);
public:
 base(int a)
 {
  x=a;
 }
};

class child
{ public:
  int y;
 friend void swapi(base &b,child &c);
 public:
 child(int a)
 {
  y=a;
 }
};

 void swapi(base &b,child &c)
 {
   b.x=b.x+c.y;
   c.y=b.x-c.y;
   b.x=b.x-c.y;
 }

 int main()
{
  base b(3);
  child c(4);
  swapi(b,c);
  cout<<"b.x="<<b.x<<endl;
  cout<<"c.y="<<c.y;
}
