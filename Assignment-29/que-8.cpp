#include<iostream>
using namespace std;
class Rupee
{
  int amount;
 public:
  Rupee(int x)
  {
   amount=x;
  }
  operator int()
  {
   return amount;
  }
};

int main()
{
 Rupee r = 18;
int x = r;
cout<<x;
return 0;
}
