
#include<iostream>
using namespace std;
int swapp(int &a,int &b)
{
 a=a+b;
 b=a-b;
 a=a-b;
}
int main()
{
 int a,b;
 cout<<"Enter two number to swap"<<endl;
 cin>>a>>b;
 swapp(a,b);
 cout<<"a="<<a<<endl<<"b="<<b;
}
