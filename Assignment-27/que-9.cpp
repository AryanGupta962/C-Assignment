#include<iostream>
using namespace std;
class mystring
{
 char str[100];
public:
 void setString()
 {
  cin.getline(str,100);
 }
 void operator !()
 {
  for(int i=0;str[i]!='\0';i++)
   {
     if(str[i]>='A'&&str[i]<='Z')
   str[i]+=32;
  else
  if(str[i]>='a'&&str[i]<='z')
   str[i]-=32;

   }

 }
void showString()
{
 cout<<endl<<str;
}
};
int main()
{
 mystring s1;
 cout<<"Enter String : "<<endl;
 s1.setString();
 !s1;
 s1.showString();
}
