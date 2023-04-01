#include<iostream>
using namespace std;
class Customer
{ protected:
 int phoneno;
 string name;
};
class Depositor:public Customer
{ protected:
 int accno,balance;

};
class Borrowers:public Depositor
{ protected:
 int loan_no,loan_amt;
public:
 void setdata()
 {
  cout<<"\nEnter Customer Name      : ";
  cin>>name;
  cout<<"Enter Customer phone No. : ";
  cin>>phoneno;
  cout<<"Enter Customer A/C No    : ";
  cin>>accno;
  cout<<"Enter Balance            : ";
  cin>>balance;
  cout<<"Enter Loan No            : ";
  cin>>loan_no;
  cout<<"Enter Loan Amount        : ";
  cin>>loan_amt;
  cout<<"--------------------------------------\n";
 }

 void show()
 {
  cout<<"Details of Customer\n\n";
  cout<<"-----------------------------------\n\n";
  cout<<"Customer Name           : "<<name;
  cout<<"\nCustomer Phone no.      : "<<phoneno;
  cout<<"\nCustomer A/C No         : "<<accno;
  cout<<"\nBalance                 : "<<balance;
  cout<<"\n-----------------------------------\n";
  cout<<"\nLoan No                 : "<<loan_no;
  cout<<"\nLoan Amount             : "<<loan_amt;
  cout<<"\n----------------------------------\n\n";

 }
};
int main()
{
 Borrowers b[5];
 int n;
 cout<<"Enter No. of Customer Details You Want  :  ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  b[i].setdata();
 }
  for(int i=0;i<n;i++)
 {
  b[i].show();
 }
}
