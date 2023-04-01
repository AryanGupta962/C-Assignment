
#include<iostream>
using namespace std;
int pow(int no,int po)
{
int result=1;
 for(int i=1;i<=po;i++)
 {
 result*=no;
 }
 return result;
}
int main()
{
 int no,po;
 cout<<"Enter a number and it's power"<<endl;
 cin>>no>>po;


 cout<<"Result is "<<pow(no,po);
}
