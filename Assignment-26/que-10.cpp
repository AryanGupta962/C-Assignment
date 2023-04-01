#include<iostream>
using namespace std;
class StaticCount
{
 static int count;
public:
 int function_calling_record()
 {
  count++;
  cout<<"Function call "<<count<<" times."<<endl;
 }
};
int StaticCount::count=0;
int main()
{
 StaticCount s1;
 s1.function_calling_record();
 s1.function_calling_record();
 s1.function_calling_record();
}
