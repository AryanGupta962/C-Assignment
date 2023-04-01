#include<iostream>
using namespace std;
class Item
{


 protected :
 string iname;
 int item_no;
 float price;
 public :
 void set_iname()
 {
  cout<<"Enter Item Name : ";
  fflush(stdin);
  getline(cin,iname);
 }
 string get_iname()
 {
  return iname;
 }

 void set_ino()
 {
  cout<<endl<<"Enter Item No. : ";
  cin>>item_no;
 }
 int get_ino()
 {
  return item_no;
 }

 void set_iprice()
 {
  cout<<endl<<"Enter Item Price : ";
  cin>>price;
 }
 float get_iprice()
 {
  return price;
 }
};
class DiscountedItem:public Item
{
 public:
 static float totalprice,totaldiscount;
 float discount_per;
public:
 void set_disprice()
 {
  cout<<endl<<"Enter Discount Percent : ";
  cin>>discount_per;
 }
 float get_disprice()
 {
  return discount_per;
 }

 float descprice()
 {
  float d;
  d=price*discount_per/100;
  totaldiscount+=d;
  d=price-d;
  return d;
 }
 void setalldetails()
 {
  set_iname();
  set_ino();
  set_iprice();
  set_disprice();
  cout<<endl<<"-------------------------"<<endl;
 }
 void display()
 {
  cout<<"Item Name : "<<iname<<endl;
  cout<<"Item No. : "<<item_no<<endl;
  cout<<"Item Price : "<<price<<endl;
  cout<<"Discount Percent : "<<discount_per<<endl;
  cout<<"Discounted Price : "<<descprice()<<endl;
  cout<<"-------------------------"<<endl;
 }

};
float DiscountedItem::totalprice=0;
float DiscountedItem::totaldiscount=0;
int main()
{
 int no;
 cout<<"How many items you want to enter ? :";
 cin>>no;
 cout<<endl;
 DiscountedItem d[no];
 for(int i=0;i<no;i++)
 {
   d[i].setalldetails();
 }
  for(int i=0;i<no;i++)
 {

   d[i].display();
   DiscountedItem::totalprice+=d[i].get_iprice();
   cout<<"Total Price : "<<DiscountedItem::totalprice<<endl;
   cout<<"Total Discount : "<<DiscountedItem::totaldiscount<<endl;
 }


}
