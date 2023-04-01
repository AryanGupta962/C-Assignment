 #include<iostream>
 using namespace std;
 class Shape
 {
  protected:
  double d1,d2;
public:
 void set_data()
 {
   cout<<"Enter first value \n";
   cin>>d1;
   cout<<"Enter Second value \n";
   cin>>d2;
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
 int main()
 {
  int n;
  cout<<"1.Area of Rectangle\n2.Area of Triangle\n";
  cin>>n;

   if(n==1)
   {
   Shape *s=new Rectangle;
    s->set_data();
   s->display_area();

   }
   if(n==2)
   {
    Shape *s=new Triangle;
     s->set_data();
   s->display_area();
   }


 }
