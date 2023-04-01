#include<iostream>
using namespace std;

class Product
{
 int x,y;
public:
 void setdata(int x,int y)
 {
  this->x=x;
  this->y=y;
 }
 void display()
 {
  cout<<"x="<<x<<endl;
  cout<<"y="<<y;
 }
 int getx()
 {
  return x;
 }
 int gety()
 {
  return y;
 }
};
class Item
{
 int a;
 public:
void operator =(Product temp)
{
 a=temp.getx()+temp.gety();
}
void display()
{
 cout<<"Total item ="<<a;
}

};
int main()
{
 Item i1;
Product p1;
p1.setdata(3,4);
i1=p1;
i1.display();
return 0;
}
