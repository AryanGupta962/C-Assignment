#include<iostream>
using namespace std;
class Student
{
 int roll_no;
 string name,course;
public:
 Student(int roll,string name,string course)
 {
  roll_no=roll;
  this->name=name;
  this->course=course;
 }
 int Display()
 {
  cout<<"Name is:"<<name<<endl<<"Roll Number is :"<<roll_no<<endl<<"Enrolled Course :"<<course<<endl;
 }
};
int main()
{
 Student s1(24,"Aryan Gupta","MCA Plain");
 s1.Display();
}
