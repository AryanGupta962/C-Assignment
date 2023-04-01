#include<iostream>
using namespace std;
class LargestNumber
{
public:
 int a,b,c;
 LargestNumber(int x,int y,int z)
 {
  a=x;
  b=y;
  c=z;
 }
 int find_largest()
 {
  if(a>b&&a>c)
   return a;
  else
   if(b>c)
   return b;
  else
   return c;
 }
};
int main()
{
 int result;
 LargestNumber l1(4,8,9);
 result=l1.find_largest();
 cout<<"Greater Number is ="<<result;
}
