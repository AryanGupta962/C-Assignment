#include<iostream>
using namespace std;
class Student
{
 int age;
 string s1;
public:
 Student(int age,string s1)
 {
  this->age=age;
  this->s1=s1;
 }
 void display()
 {
  cout<<"Name is = "<<s1<<endl;
  cout<<"Age is = "<<age;
 }

};
void* operator new(size_t size)
 {
  void *p=malloc(size);
  return p;
 }
 void operator delete(void *p)
 {
  free(p);
 }
int main()
{
 Student *s1=new Student(22,"Aryan");
 s1->display();


}

