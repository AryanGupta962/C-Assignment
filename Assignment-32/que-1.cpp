#include<iostream>
using namespace std;
class Float
{
 float f;
public:
 Float(float f)
 {
  this->f=f;
 }
 float operator +(float temp)
 {
  return f+temp;
 }
};
int main()
{
 Float f(10.4);
 float r=f+5.8;
 cout<<r;
}
