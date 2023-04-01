#include<iostream>
using namespace std;
class ReverseNumber
{
 int no;
public:
 ReverseNumber(int temp)
 {
  no=temp;
 }

 int reverse_Number()
 {
  int result=0,temp;
  while(no!=0)
  {
   temp=no%10;
   result=(result*10)+temp;
   no=no/10;
  }
  return result;
 }


};
int main()
{ int result;
 ReverseNumber r1(3456);
 result=r1.reverse_Number();
 cout<<"Reverse of a number is "<<result;

}
