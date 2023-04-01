
#include<iostream>
#include<cstring>
using namespace std;
int main()
{ int i=0,counter=0;
 string s1;

 cout<<"Enter You NickName : Limit is 8 chracter"<<endl;
 getline(cin,s1);
 try{
  //space
 for( i=0;s1[i]!='\0';i++)
 {
  if(s1[i]==32)
  {
   counter++;
   break;
  }
 }
//digit
  for(i=0;s1[i]!='\0';i++)
 {
 if(s1[i]>='0'&&s1[i]<='9')
 {
  counter++;
  break;
 }
 }
//special symbol
  for( i=0;s1[i]!='\0';i++)
 {
 if(s1[i]>='a'&&s1[i]<='z'||s1[i]>='0'&&s1[i]<='9'||s1[i]>='A'&&s1[i]<='Z')
 {
 //donothing
 }
 else{
  counter++;
  break;
 }
 }



 if(s1.length()>8)
   {

    char c;
    throw c;
   }

   if(counter>0)
   {

   throw counter;
   }

   cout<<"Name is valid";
}catch(char c)
 {
  cout<<"Nickname must of size 8 or less than 8 character";
  //return 0;
 }
catch(int i)
 {
  cout<<"Nickname not to be contain digits, space, special symbol"<<endl;
  return 0;
 }




}
