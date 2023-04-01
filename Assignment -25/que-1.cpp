#include<iostream>
using namespace std;
class Complex
{
 double no1,no2;
public:
 double getter_no1()
 {
  return no1;
 }
  double getter_no2()
 {
  return no2;
 }
 setter_no1(double temp)
 {
  no1=temp;
 }
 setter_no2(double temp)
 {
  no2=temp;
 }
Complex operator +(Complex temp)
{
 this->no1+=temp.no1;
 this->no2+=temp.no2;
 return *this;
}
 void Display()
 {
  cout<<"Number 1 ="<<this->no1<<endl<<"Number 2="<<this->no2;

 }
};
int main()
{
 Complex c1,c2,c3;
 c1.setter_no1(3.4);
 c1.setter_no2(6.4);
 c2.setter_no1(8.4);
 c2.setter_no2(2.4);
 c3=c1+c2;
c3.Display();
}
