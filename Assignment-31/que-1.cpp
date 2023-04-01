#include<iostream>
using namespace std;
class Person
{
 protected :
 int age;
 string name;
 public:
 void setName()
 {
  cout<<"Enter name"<<endl;
  getline(cin,name);

  }
  void setAge()
  {
   cout<<"Enter age"<<endl;
  cin>>age;
  }
  string getName()
  {
   return name;
  }
  int getAge()
  {
   return age;
  }
};
class Employee:public Person
{
 int empid,salary;
public:
 void setEmpid()
 {
  cout<<"Enter Employee Id:"<<endl;
  cin>>empid;
 }void setSalary()
 {
  cout<<"Enter Employee salary"<<endl;
  cin>>salary;
 }
 int getEmpid()
 {
  return empid;
 }
 int getSalary()
 {
  return salary;
 }
 void displaydata()
 {
  cout<<"    Employee Details :   "<<endl;
  cout<<"Name :"<<name<<endl;
  cout<<"Age :"<<age<<endl;
  cout<<"Employee ID :"<<empid<<endl;
  cout<<"Salary :"<<salary<<endl;
 }
};
int main()
{
 Employee e1;
 e1.setName();
 e1.setAge();
 e1.setEmpid();
 e1.setSalary();
 e1.displaydata();
}
