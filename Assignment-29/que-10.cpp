
#include<iostream>
using namespace std;
class Rupee
{  public:
  int amount;
 public:
  Rupee(int x)
  {
   amount=x;
  }
  Rupee()
  {

  }
  operator int()
  {
   return amount;
  }
   void display()
  {
   cout<<"Rupee is = "<<amount<<endl;
  }
};

class Dollar
{ public:
  float amount;
 public:
  Dollar(Rupee r1)
  {
   amount=r1.amount/82.53;
  }
  void operator =(int x)
  {
   amount=x;
  }
  void display()
  {
   cout<<"Dollar is = "<<amount<<endl;
  }
  operator Rupee()
  {
   Rupee r1;
   r1.amount=amount*82.5374;
   return r1;
  }
};

int main()
{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}
