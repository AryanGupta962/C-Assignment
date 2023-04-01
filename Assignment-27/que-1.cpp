#include<iostream>
using namespace std;
class Complex
{
 int a,b;
public:
 Complex(int a,int b)
 {
  this->a=a;
  this->b=b;   //parameter constructor
 }
 Complex()
 {
  // Default Constructor
 }
 //Addition
 Complex operator +(Complex temp)
 {
  temp.a=temp.a+a;
  temp.b=temp.b+b;

  return temp;
 }
 //Difference
 Complex operator -(Complex temp)
 {

 temp.a=a-temp.a;
  temp.b=b-temp.b;
  return temp;
 }
 //Multiply
 Complex operator *(Complex temp)
 {
   temp.a=temp.a*a;
  temp.b=temp.b*b;

  return temp;
 }
 // Comparision
 bool operator ==(Complex temp)
 {
   if(temp.a==a&&temp.b==b)
      return true;
      else
      return false;

 }
int showData()
{
 cout<<a<<"+"<<b<<"i"<<endl;
}
};
int main()
{
 Complex c1(2,3),c2(1,2),c3;
 c3=c1+c2;
 c3.showData();
 c3=c1-c2;
 c3.showData();
 c3=c1*c2;
 c3.showData();

 bool b1= c1==c2;
 if(b1==true)
 cout<<"Both Object having same value in data member";
 else
  cout<<"Both Object having Diffrent values in data member";

}
