#include<iostream>
using namespace std;
class Max
{
public:
// void findMaximum(float a,int b)
// {
//  if(a>b)
//   cout<<"Greater is "<<a<<endl;
//  else
//   cout<<"Greater is "<<b<<endl;
// }
//  void findMaximum(int a,float b)
// {
//  if(a>b)
//   cout<<"Greater is "<<a<<endl;
//  else
//   cout<<"Greater is "<<b<<endl;
// }
  void findMaximum(int a,int b)
 {
  if(a>b)
   cout<<"Greater is "<<a<<endl;
  else
   cout<<"Greater is "<<b<<endl;
 }
  void findMaximum(float a,float b)
 {
  if(a>b)
   cout<<"Greater is "<<a<<endl;
  else
   cout<<"Greater is "<<b<<endl;
 }
};
int main()
{
 Max m1;
 cout<<"One is real second is int ="<<endl;
 m1.findMaximum(3.14,6);
 cout<<"One is int second is real ="<<endl;
 m1.findMaximum(9,9.14);
 cout<<"One is int second is int ="<<endl;
 m1.findMaximum(3,6);
 cout<<"One is real second is real ="<<endl;
 m1.findMaximum((float)3.14,(float)3.45);

}
