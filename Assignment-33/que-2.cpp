
 #include<iostream>
 using namespace std;
 class Shape
 {
  protected:
  double d1,d2;
public:
 void set_data(double a,double b=0)
 {
   d1=a;
   d2=b;
 }
 virtual void display_area()
 {

 }
 };
 class Triangle :public Shape
 {
  void display_area()
  {
   double re=(1/2.0)*d1*d2;
   cout<<"Area of Triangle is : "<<re;
  }
 };
 class Rectangle :public Shape
 {
   void display_area()
  {
   cout<<"Area of rectangle is : "<<d1*d2;
  }
 };
 class Circle:public Shape
 {
  void display_area()
  {
   cout<<"Area of rectangle is : "<<3.14*d1*d1;
  }
 };
 int main()
 {
  int n;
  cout<<"1.Area of Rectangle\n2.Area of Triangle\n3.Area of Circle\n";
  cin>>n;

   if(n==1)
   {
   Shape *s=new Rectangle;
    s->set_data(4,5);
   s->display_area();

   }
   if(n==2)
   {
    Shape *s=new Triangle;
     s->set_data(6,3);
   s->display_area();
   }
   if(n==3)
   {
    Shape *s=new Circle;

     s->set_data(3);
   s->display_area();
   }

 }
