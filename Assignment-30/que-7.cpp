
#include<iostream>
#include<cstring>
using namespace std;
int main()
{ int i=0;
 string s1;
 cout<<"Enter You Name : Limit is 6 chracter"<<endl;
 getline(cin,s1);
 try{
 for( i=0;s1[i]!='\0';i++)
 {
  if(s1[i]>='A'&&s1[i]<='Z'||s1[i]>='a'&&s1[i]<='z')
  {
   //do nothing
  }
  else{
   throw s1;
  }
 }
 if(s1.length()<=6)
   {
    cout<<"Name is valid";
    return 0;
   }
   else
   {int sizei=i; throw sizei;}
}catch(int size)
 {
  cout<<"Size of name is greater than 6 character";
 }
catch(string s)
 {
  cout<<"Name containing special symbols or number";;
 }




}
