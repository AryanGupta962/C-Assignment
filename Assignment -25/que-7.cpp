#include<iostream>
using namespace std;
class LargestNumber
{
 int a,b,c,result;
public:
 LargestNumber(int a,int b,int c)
 {
  this->a=a;
  this->b=b;
  this->c=c;
 }
    int Largest_Number()
    {
     result=(a>b&&a>c)?a:b>c?b:c;
     return result;
    }
};
int main()
{
 LargestNumber n1(5,8,1);
 cout<<"Largest Number is "<<n1.Largest_Number();
}
