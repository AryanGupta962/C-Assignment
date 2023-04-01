#include<iostream>
using namespace std;
class Factorial
{ int fact,re;
public:
 Factorial(int temp)
 {
  fact=temp;
 }
 Factorial(const Factorial &f)
 {
  re=1;
  for(int i=2;i<=f.fact;i++)
   re=re*i;

 }
 int getresult()
 {
  return re;
 }

};
int main()
{
 Factorial f(5);
 Factorial f1=f;
 cout<<"Factorial is ="<<f1.getresult();
}
