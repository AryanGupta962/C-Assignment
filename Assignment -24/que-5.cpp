#include<iostream>
using namespace std;
class Fibonacci
{
public:
 int no;
 bool isfibonaci()
 {
  int a=1,b=1,result;
  while(true)
  {
   result=a+b;
   a=b;
   b=result;
   if(result>no)
    return false;

   if(result==no)
    return true;
  }
 }
};
int main()
{
 Fibonacci f1;
 f1.no=11;
 if(f1.isfibonaci()==true)
  cout<<"Number Found in Fibonnaci Series";
 else
  cout<<"Number not found in Fibonnaci series";

}
