
#include<iostream>
#include<cstring>
using namespace std;
int main()
{ int i=0,counter=0;
 string s1;

 cout<<"Enter You Name : Limit is 6 chracter"<<endl;
 getline(cin,s1);
 try{
 for( i=0;s1[i]!='\0';i++)
 {
  if(s1[i]>='A'&&s1[i]<='Z')
  {
   counter++;
   break;
  }
 }

 for( i=0;s1[i]!='\0';i++)
 {
 if(s1[i]>='a'&&s1[i]<='z')
 {
  counter++;
  break;
 }
 }

  for(i=0;s1[i]!='\0';i++)
 {
 if(s1[i]>='0'&&s1[i]<='9')
 {
  counter++;
  break;
 }
 }

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



 if(s1.length()<6)
   {

    char c;
    throw c;
   }

   if(counter!=4)
   {

   throw counter;
   }

   cout<<"Password is valid";
}catch(char c)
 {
  cout<<"password must of size 6 or greater than 6 chrater";
  //return 0;
 }
catch(int i)
 {
  cout<<"Password Must be contain 1 digit, 1 Capital letter, 1 special symbol"<<endl;
  return 0;
 }




}
