#include<iostream>
#include<cstring>
using namespace std;
class Cstring
{
 char s[50];
public:

 void setString()
 {
  cout<<"Enter String :";
  cin.getline(s,40);
 }
Cstring operator+(Cstring temp)
{
 strcat(temp.s,s);
 return temp;

}

int operator==(Cstring temp)
{
  int b1=strcmp(s,temp.s);
  return b1;
}
void showString()
{
 cout<<"String is : "<<s;
}
};
int main()
{
 Cstring c1,c2,c3;
 c1.setString();
 c2.setString();
 c3=c1+c2;
 c3.showString();

 if(c1==c2)
   cout<<endl<<"Both Strings are not Equal"<<endl;
  else
   cout<<endl<<"Both strings are Equal"<<endl;

}
