#include<iostream>
using namespace std;
class Student
{
 int age;
 string name;
public :

   void* operator new(size_t size1)
 {
  cout<<"Overloaded new operator called "<<size1<<endl;
  void *p=malloc(size1);
  return p;
 }

 void operator delete(void *p)
 {
  cout<<"Overloaded delete operator called"<<endl;
  free(p);
 }

  void display()
  {
   cout<<"Name is = "<<name<<endl;
   cout<<"Age is = "<<age;
  }
  Student(int age,string name)
  {
   this->age=age;
   this->name=name;
  }
};


int main()
{
 Student *s1=new Student(22,"Aryan");
 int *i=new int;
 *i=9;
 cout<<*i;
 s1->display();
 delete s1;
}
