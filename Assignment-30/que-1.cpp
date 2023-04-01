
#include<iostream>
#include<cstring>

using namespace std;
int main()
{

 int a;
 string s1;
 try
 {
  cout<<"Enter a number";
  cin>>a;
  cout<<"Enter your Name";
  getline(cin,s1);
  if(a<=0)
   throw a;
   for(int i=0;s1[i]!='\0';i++)
   {
    if(s1[i]>'A'&&s1[i]<'Z'||s1[i]>'a'&&s1[i]<'z')
     cout<<s1;
    else throw s1;
   }

 }
 catch(int a)
 {
  cout<<"Number should be greater than 0";
 }catch(string s2)
 {
  cout<<"String class error";
 }
 catch(...)
 {
  cout<<"called from Default block";
 }
}
