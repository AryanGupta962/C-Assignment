#include<iostream>
using namespace std;
int primeOrNot(int a)
{
 for(int i=2;i<a;i++)
 {
  if(a%i==0){
   cout<<"Number is not prime";
  return 0;
  }

 }
 cout<<"Number is prime";
}
int main()
{
 int a;
 cout<<"Enter a number to check prime or not"<<endl;
 cin>>a;
 primeOrNot(a);
}
