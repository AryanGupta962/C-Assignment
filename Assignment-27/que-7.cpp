#include<iostream>
using namespace std;
class Fraction
{
 long num,den;
public:
Fraction operator ++(void)//pre
{
 ++num;
 ++den;
 return *this;
}
Fraction operator ++(int)//post
{ Fraction temp=*this;
 num++;
 den++;
 return temp;
}
friend ostream& operator <<(ostream &o,Fraction &f1)
{
 cout<<f1.num<<"/"<<f1.den;
}
friend istream& operator >>(istream &i,Fraction &f1)
{
 cout<<"Numerator : ";
 cin>>f1.num;
 cout<<endl<<"Denominator : ";
 cin>>f1.den;
 cout<<endl;
}
};

int main()
{
 Fraction f1,f2;
 cout<<"Enter 1st Fraction value"<<endl<<endl;
 cin>>f1;
 cout<<endl;
 f1++;
 cout<<"f1++  :  ";
 cout<<f1<<endl;
 ++f1;
  cout<<"++f1  :  ";
 cout<<f1<<endl<<endl;

 cout<<"Enter 2st Fraction value"<<endl<<endl;
 cin>>f2;
 f2=++f1;
 cout<<"f2=++f1"<<endl;
 cout<<"f1   :   ";
 cout<<f1<<endl;
 cout<<"f2   :   ";
 cout<<f2<<endl<<endl;

 f2=f1++;
 cout<<"f2=f1++"<<endl;
 cout<<"f1   :   ";
 cout<<f1<<endl;
 cout<<"f2   :   ";
 cout<<f2<<endl;
}
