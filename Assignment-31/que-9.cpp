#include<iostream>
using namespace std;
class student
{
protected:
 int id ;
 string name;
};
class studentExam:public student
{ protected:
 int mark[6];

};
class studentResult:public studentExam
{
 int percentage;

public:
 void setdata()
 {
  cout<<"--------------------------------\n";
  cout<<"Enter Roll No.            : ";
  cin>>id;
  cout<<"Enter Student Name        : ";
  cin>>name;
  cout<<"Enter Marks for Subject 1 : ";
  cin>>mark[1];
  cout<<"Enter Marks for Subject 2 : ";
  cin>>mark[2];
  cout<<"Enter Marks for Subject 3 : ";
  cin>>mark[3];
  cout<<"Enter Marks for Subject 4 : ";
  cin>>mark[4];
  cout<<"Enter Marks for Subject 5 : ";
  cin>>mark[5];
  cout<<"Enter Marks for Subject 6 : ";
  cin>>mark[6];
 }

 void show()
 {
  cout<<"--------------------------------\n";
  cout<<"******* Student MarkList *******\n";
  cout<<"--------------------------------\n";
  cout<<"Roll No.                : "<<id;
  cout<<"\nStudent Name          : "<<name;
  cout<<"\n\nMark of Subject 1   : "<<mark[1];
  cout<<"\nMark of Subject 2   : "<<mark[2];
  cout<<"\nMark of Subject 3   : "<<mark[3];
  cout<<"\nMark of Subject 4   : "<<mark[4];
  cout<<"\nMark of Subject 5   : "<<mark[5];
  cout<<"\nMark of Subject 6   : "<<mark[6];
  cout<<"\n\nTotal Percentage  : "<<(mark[1]+mark[2]+mark[3]+mark[4]+mark[5]+mark[6])/6.0;
  cout<<"\n----------------------------------\n";
 }
};
int main()
{
 int n;
 cout<<"Enter No. of Students You Want? : ";
 cin>>n;
 studentResult s[5];
 for(int i=0;i<n;i++)
 {
  s[i].setdata();
 }
 for(int i=0;i<n;i++)
 {
  s[i].show();
 }
}
