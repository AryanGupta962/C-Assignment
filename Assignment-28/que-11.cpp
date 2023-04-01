#include<iostream>
using namespace std;
class Marks
{
 int mark;
public:
 Marks(int a)
 {
  mark=a;
 }
 void printmarks()
 {
  cout<<"Marks = "<<mark;
 }
 Marks* operator->()
 {
  return this;
 }
};
int main()
{
 Marks p(45);
 p->printmarks();
}
