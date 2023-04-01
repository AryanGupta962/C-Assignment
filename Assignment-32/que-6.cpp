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
 class C:public B
 {
 public:
  C():B()
  {
   cout<<"C default call";

  }
  C(int a,int b=0):B(a,b)
  {
   cout<<"C parametrized call";
  }
 };
 int main()
 {
  C c(3);

 }
