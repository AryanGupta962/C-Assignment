#include<iostream>
using namespace std;
class Employee
{ protected:
 int empcode;
 string name;
public:
int getempid()
 {
  return empcode;
 }
};
class Fulltime:public Employee
{
 int rate,days,tsalary;
 public:
 void setData()
 {
  cout<<"Enter Employee Number"<<endl;
  cin>>empcode;
  cout<<"Enter Employee Name\n";
  cin>>name;
  cout<<"Enter Per Day Rate\n";
  cin>>rate;
  cout<<"Enter Working Days\n";
  cin>>days;
  tsalary=rate*days;
 }

 void Show()
 {
  cout<<"\n-----------------------------------\n\n";
  cout<<"Employee Number     :  "<<empcode;
  cout<<"\nEmployee Name     :  "<<name;
  cout<<"\nSalary            :  "<<tsalary;
  cout<<"\nStatus            :  FullTime";
  cout<<"-----------------------------------\n\n";
 }
};


class Parttime: public Employee
{
 int w_hours,rate,salary;
 public:
  void setData1()
 {
  cout<<"Enter Employee Number"<<endl;
  cin>>empcode;
  cout<<"Enter Employee Name\n";
  cin>>name;
  cout<<"Enter Per Hour Rate\n";
  cin>>rate;
  cout<<"Enter Working Hours\n";
  cin>>w_hours;
  salary=rate*w_hours;
 }

 void Show1()
 {
  cout<<"\n-----------------------------------\n\n";
  cout<<"Employee Number     :  "<<empcode;
  cout<<"\nEmployee Name     :  "<<name;
  cout<<"\nSalary            :  "<<salary;
  cout<<"\nStatus            :  Part Time";
  cout<<"-----------------------------------\n\n";
 }
};


int main()
{
  int c1,c2,i=0,j=0;
  Fulltime f[5];
  Parttime p[5];

  cout<<"1. Enter Record\n";
  cout<<"2. Display Records\n";
  cout<<"3. Search Record\n";
  cout<<"4. Quit\n\n";

  cout<<"Enter Your Choice : ";
  cin>>c1;

    switch(c1)
    {
    case 1:
      cout<<"1. Full Time\n";
      cout<<"2. Part Time\n";
      cin>>c2;
       switch (c2)
       {
       case 1:
        f[i++].setData();
        break;
       case 2:
        p[j++].setData1();

       }
     break;

       case 2:
        for(int a=0;a<i;a++)
         f[a].Show();

        for(int a=0;a<j;a++)
         p[a].Show1();

        break;

       case 3:
        int id;
        cout<<"Enter Employee ID\n";
        cin>>id;
      for(int a=0;a<i;a++)
         if(f[a].getempid()==id){
         cout<<"Record Found Successfully !";
         break;
         }
        for(int a=0;a<j;a++)
         if(p[a].getempid()==id){
         cout<<"Record Found Successfully !";
         break;
         }

       case 4:
        break;
    }


}
