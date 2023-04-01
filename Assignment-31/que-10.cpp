#include<iostream>
#include<cstring>
using namespace std;
class worker
{ protected:
 int code;
 string name;
 float salary;
};
class officer
{ protected:
 float da ,hra;
};
class manager:public worker ,public officer
{
 float ta,gs;
public:
 void setdata()
 {

  cout<<"--------------------------------\n";
  cout<<"Enter Code     : ";
  cin>>code;
  cout<<"\nEnter Name   : ";
  fflush(stdin);
  getline(cin,name);
  cout<<"\nEnter Salary : ";
  cin>>salary;
  cout<<"\nEnter DA     : ";
  cin>>da;
  cout<<"\nEnter HRA    : ";
  cin>>hra;
  cout<<"\nEnter TA     : ";
  cin>>ta;
  cout<<"\n-------------------------------\n";
 }
 void show()
 {
  cout<<"Manager Information\n";
  cout<<"---------------------------\n";
  cout<<"Code            : "<<code;
  cout<<"\nName          : "<<name;
  cout<<"\nSalary        : "<<salary;
  cout<<"\nDA            : "<<da;
  cout<<"\nHRA           : "<<hra;
  cout<<"\nTA            : "<<ta;
  cout<<"\nGross Salary  : "<<salary+da+hra+ta;
 }
};
int main()
{
 int n;
 cout<<"Enter Manager Count : ";
 cin>>n;
 manager m[5];
 for(int i=0;i<n;i++)
 {
  cout<<"Enter Worker Information for "<<i+1<<"\n\n";
  m[i].setdata();
 }
 for(int i=0;i<n;i++)
 {
  m[i].show();
 }
}
