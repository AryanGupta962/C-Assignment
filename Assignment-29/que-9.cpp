#include<iostream>
using namespace std;
class Dollar
{
  int amount;
 public:
  void operator =(int x)
  {
   amount=x;
  }
  void display()
  {
   cout<<"Dollar is = "<<amount;
  }
};

int main()
{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}
