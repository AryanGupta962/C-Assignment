#include<iostream>
using namespace std;
class A
{
public:
 A()
 {
  cout<<"Default";
 }
 A(int a)
 {
  cout<<"Parametrize\n";
 }
};
class B:public A
{
public:
 B(int a):A(a)
 {
  cout<<"child constructor\n";
 }
};
int main()
{
 B b(3);

}
