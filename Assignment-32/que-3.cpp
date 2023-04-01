#include<iostream>
using namespace std;
class Animals
{
 public:
 void sound()
 {
  cout<<"From animals";
 }

};
class Dogs:public Animals
{
 public:
 void sound()
 {
  cout<<"From Dogs";
 }
};
int main()
{
 Dogs d;
 d.sound();
}
