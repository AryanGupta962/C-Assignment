

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 unsigned int no;
 int i=0;
 cout<<"Enter You PIN code number"<<endl;
 cin>>no;
 try{
 for( i=0;no!=0;i++)
 {
  no=no/10;
 }

  if(i==6)
  {

   cout<<"Area PIN code is Valid";
   return 0;
  }
 throw no;
 }catch(unsigned int s)
 {

  cout<<"! Invalid PIN Code not containing 6 digit";
 }



}
