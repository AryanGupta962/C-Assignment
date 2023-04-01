#include<iostream>
using namespace std;
class Date
{
 int dd,mm,yy;
public:
 Date(int dd,int mm,int yy)
 {
  this->dd=dd;
  this->mm=mm;
  this->yy=yy;
 }
 void Display()
 { if(dd<10&&mm<10)
  cout<<"Date - "<<"0"<<dd<<"/"<<"0"<<mm<<"/"<<yy;
  if(dd<10&&mm>10)
  cout<<"Date - "<<"0"<<dd<<"/"<<mm<<"/"<<yy;
  if(dd>10&&mm<10)
  cout<<"Date - "<<dd<<"/"<<"0"<<mm<<"/"<<yy;
  if(dd>10&&mm>10)
  cout<<"Date - "<<dd<<"/"<<mm<<"/"<<yy;
 }
};
int main()
{
 Date d1(16,11,2023);
 d1.Display();
}
