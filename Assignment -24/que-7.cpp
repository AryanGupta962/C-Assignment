#include<iostream>
using namespace std;
int add(int a,int b=0,int c=0)
{
 if(a<0||b<0||c<0){
  cout<<"Number must be positive";
 return 0;
 }

 if(c>0)
 {
  return a+b+c;
 }
 else
  if(b>0){
  return a+b;
 }

}
int main()
{
 int a,b,c,result;
 result=add(-3,4);
 if(result==0)
  return 0;
 else
 cout<<"Addition is "<< result;

}
