
#include<iostream>
using namespace std;
class Bank
{
 float principle,rate;
 int time;
public:
 Bank(float p,float r,int t)
 {
  principle=p;
  rate=r;
  time=t;
 }
 float calculateSI()
 {
  return (principle*rate*time)/100;
 }

}b1(1200,4.3,7);
int main()
{
 cout<<"Simple Intrest is = "<<b1.calculateSI();
}
