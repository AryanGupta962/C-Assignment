#include<iostream>
using namespace std;
double Arthmetic(int a,int b)
{
 char c;
 double result;
cout<<"Enter choice :"<<endl<<"For divison press '/'"<<endl<<"For Multiplication press '*'"<<endl<<"For Addition press '+'"<<endl<<"For Substraction press'-'"<<endl;
cin>>c;
try
{
 if(c=='/')
 {
  if(b!=0||b>0)
  {
  result=a/b;
  return result;
  }
  else throw b;
 }
  else throw c;

}catch(int b)
{
 cout<<"Number Should be greater than 0";
}
catch(char c)
{
 cout<<"Please Input valid Choice";
}
catch(...)
{
 cout<<"Unknown Error";
}


}
int main()
{
 int a,b;
 cout<<"Enter Two Numbers"<<endl;
 cin>>a>>b;
 Arthmetic(a,b);
}
