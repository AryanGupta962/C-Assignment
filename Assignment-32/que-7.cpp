
 #include<iostream>
 using namespace std;
 class A
 {
 public:
  A()
  {
   cout<<"A default call\n";
  }
  A(int a,int b=0)
  {
   cout<<"A Parametrized call\n";
  }
 };
 class B:public A
 {
 public:
  B():A()
  {
   cout<<"B default call\n";
  }
  B(int a,int b=0):A(a,b)
  {
   cout<<"B parametrized call\n";
  }
 };

 int main()
 {
  B c(3);

 }
