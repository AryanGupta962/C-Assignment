
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 unsigned int no;
 int i=0;
 cout<<"Enter You Mobile number"<<endl;
 cin>>no;
 try{
 for( i=0;no!=0;i++)
 {
  no=no/10;
 }

  if(i==10)
  {

   cout<<"phone Number is Valid";
   return 0;
  }
 throw no;
 }catch(unsigned int s)
 {

  cout<<"Mobile number is not containing 10 digit";
 }



}
