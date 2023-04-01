#include<iostream>
#include<cstring>

using namespace std;
int main()
{

 int a;
 string s1;
 try     //try to run our program and and want to handel run time error
 {
  cout<<"Enter a number";
  cin>>a;
  cout<<"Enter your Name";
  getline(cin,s1);
  if(a<=0)
   throw a; // use to throw execption type
   for(int i=0;s1[i]!='\0';i++)
   {
    if(s1[i]>'A'&&s1[i]<'Z'||s1[i]>'a'&&s1[i]<'z')
     cout<<s1;
    else throw s1; //using multiple throw block in multiple conditions
   }

 }
 catch(int a) //catching int type exception
 {
  cout<<"Number should be greater than 0";
 }catch(string s2) // cathing string type exception passing by throw
 {
  cout<<"String class error";
 }
 catch(...) //generic catch block if we dont know which kind of error comes at runtime
 {
  cout<<"called from Default block";
 }
}
