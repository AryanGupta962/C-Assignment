#include<iostream>
using namespace std;
class Person
{
 protected :
 int phone_no;
 string name,address;
 public:

 void setName()
 {
  cout<<endl<<"Enter Name : ";
  fflush(stdin);
  getline(cin,name);

  }
  void setAddress()
  {
   cout<<endl<<"Enter Address : ";
  getline(cin,address);
  }

   void setPhone_no()
  {
   cout<<endl<<"Enter Phone No. : ";
  cin>>phone_no;
  fflush(stdin);
  }

  string getName()
  {
   return name;
  }
   int getPhone_no()
  {
   return phone_no;
  }
  string getAddress()
  {
   return address;
  }
};
class Employee:public Person
{
 int eno;
 public:
 void seteno()
 {
  cout<<"Enter Employee No. : ";
  cin>>eno;
 }

 int getEno()
 {
  return eno;
 }

};

class Manager:public Employee
{
 string designation,depname;
 int salary;
public:
 void setdesig()
 {
  cout<<endl<<"Enter Designation : ";
  getline(cin,designation);
 }

 string getdesig()
 {
  return designation;
 }

 void setdepname()
 {
  cout<<endl<<"Enter Department Name : ";
  getline(cin,depname);
 }

 string getdepname()
 {
  return depname;
 }

 void setsalary()
 {
  cout<<endl<<"Enter Basic Salary : ";
  cin>>salary;
 }

 int getsalary()
 {
  return salary;
 }

   void setalldetails()
   {
    cout<<"Enter Details of Manager"<<endl<<"--------------------------------"<<endl;
    seteno();
    setName();
    setAddress();
    setPhone_no();
    setdesig();
    setdepname();
    setsalary();
    cout<<endl;
   }

};
int main()
{
 int no;
 int maxsalary=1;
  string ename;
 cout<<"How many Managers You Want to Enter? : ";
 cin>>no;
 cout<<endl;
  Manager m[no];
 for(int i=0;i<no;i++)
 {
 m[i].setalldetails();
 }

 for(int i=0;i<no;i++)
 {

  if(m[i].getsalary()>maxsalary)
  {
   maxsalary=m[i].getsalary();
   ename=m[i].getName();
  }

 }
 cout<<"Manager with Highest Salary is : "<<maxsalary<<endl;
 cout<<"And, Manager name is : "<<ename<<endl;

}

