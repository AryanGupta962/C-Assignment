#include<iostream>
using namespace std;
class Factorial
{
 int result;
 public:
  Factorial()
  {
   result=1;
  }
 int factorial(int no)
 {
  while(no>=1)
  {
  result*=no;
  no--;
  }
  return result;
 }

};
int main()
{
 Factorial f1;
  cout<<"Factorial is ="<<f1.factorial(5);

}
