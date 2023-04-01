#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  int start=0,sizei=0;
 string s1;
 cout<<"Enter You Email"<<endl;
 getline(cin,s1);
 sizei=s1.length();
 try{
 if(sizei<13)
  throw sizei;
 else
 {
  start=sizei-10;
  string s2="@gmail.com";
  string subs=s1.substr(start,sizei-1);
  if(s2.compare(subs)==0)
   cout<<"Email is Valid";
   else
    throw s1;
 }
} catch(string s1)
{
 cout<<"String is not containing @gmail.com";
}
catch(int i)
{
 cout<<"Email address size is must be greater than 13 or to be 13";
}
catch(...)
{


 cout<<"Enter valid Email";
}
}
