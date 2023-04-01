#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 string s1;
 cout<<"Enter You email Address"<<endl;
 getline(cin,s1);
 try{
 for(int i=0;s1[i]!='\0';i++)
 {
  if(s1[i]=='@')
  {
   cout<<"Email Address is Valid";
   return 0;
  }
 }
 throw s1;
 }catch(string s)
 {
  cout<<"Email address not containing '@' symbol";
 }



}
