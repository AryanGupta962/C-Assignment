#include<iostream>
using namespace std;
class Complex
{
 int a,b;
public:
 void setData(int a,int b)
 {
 this->a=a;
 this->b=b;
 }
 void showData()
 {
  cout<<"Value of a is : "<<a<<endl;
  cout<<"Value of b is : "<<b;
   }
};
int main()

{
 Complex c1;
 c1.setData(3,4);
 c1.showData();
}
