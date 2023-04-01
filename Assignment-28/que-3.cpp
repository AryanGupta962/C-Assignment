#include<iostream>
using namespace std;
class ArrayBound
{ public:
 int a[50];
public:
 int& operator[](int index)
 {

  int limit=sizeof(a)/sizeof(int);
  if(index>limit)
  {
   cout<<"array acess out of Bound"<<endl;

  }

  return a[index];

 }

};
int main()
{
 ArrayBound a1;
 a1[23]=267;
 try{

 cout<<a1[60];
  throw a1;
 }catch(int [])
 {
  cout<<"Error at line 28";
 }
}
