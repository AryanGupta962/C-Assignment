#include<iostream>
using namespace std;
class Subjects_Marks
{ protected:
 int maths,science,computer;
public:
 void set_maths()
 {
  cout<<"Enter Marks of subject Maths :"<<endl;
  cin>>maths;
 }
 void set_science()
 {
  cout<<"Enter Marks of subject Science :"<<endl;
  cin>>science;
 }
 void set_computer()
 {
  cout<<"Enter Marks of subject Computer :"<<endl;
  cin>>computer;
 }
};
class Total_Marks:public Subjects_Marks
{ protected:
  int total;
public:
 void totalmarkscalculator()
 {
  total=maths+science+computer;
 }

};

class PercentageOfStudents:public Total_Marks
{
 float percentage;
public:
 void pecentagecalculator()
 {

  percentage=total/3.0;
 }
 void print_percentage()
 {
  cout<<endl<<"Percentage is :"<<percentage<<endl;
 }
};
int main()
{
 PercentageOfStudents varun;
 varun.set_maths();
 varun.set_science();
 varun.set_computer();
 varun.totalmarkscalculator();
 varun.pecentagecalculator();
 varun.print_percentage();
}
