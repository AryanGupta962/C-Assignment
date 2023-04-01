#include<iostream>
using namespace std;
class Bill
{
 int unit,Amount,Accno;
 string Name;
public:
 int get_info()
 {cout<<"-------------UPPCL URBAN-----------"<<endl;
  cout<<"Enter Consumer Name :";
  getline(cin,Name);
  cout<<"Enter Account Number :";
  cin>>Accno;
  cout<<"Enter Consumption Unit :";
  cin>>unit;
 }
 float Calculate_Bill()
 { Amount=1;
  if(unit<=100)
  {
   Amount=unit*1.20;
  }
  if(unit>100&&unit<=200)
   Amount=unit*2.0;
  if(unit>200)
   Amount=unit*3.0;
 }
 void Display()
 {cout<<endl<<"----------------Billing Details-----------"<<endl;
  cout<<"Name : "<<Name<<endl;
  cout<<"Account no : "<<Accno<<endl;
  cout<<"Billing Amount is : "<<Amount<<endl;
 }
};
int main()
{
 Bill b1;
 b1.get_info();
 b1.Calculate_Bill();
 b1.Display();
}
