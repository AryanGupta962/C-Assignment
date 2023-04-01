#include<iostream>
using namespace std;
class Complex
{
 int a,b;
public:
 friend ostream& operator <<(ostream &o,Complex &c)
 {
   cout<<"value of a ="<<c.a<<endl;
   cout<<"value of b ="<<c.b<<endl;
   cout<<c.a<<"+"<<c.b<<"i"<<endl;
   return cout;
 }
 friend istream& operator >>(istream &i,Complex &c)
 {
  cout<<"Enter value of a"<<endl;
  cin>>c.a;
  cout<<"Enter value of b"<<endl;
  cin>>c.b;
  return cin;
 }
};
int main()
{
 Complex c1,c2;
 cin>>c1>>c2;
 cout<<c1<<c2;
}
