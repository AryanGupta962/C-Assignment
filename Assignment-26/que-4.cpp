#include<iostream>
using namespace std;
class Counter
{
 static int count;
public:
 Counter()
 {
  count++;
 }
 int get_count()
 {
  return count;
 }
};
int Counter::count=0;
int main()
{
 Counter c1,c2,c3,c4;
 cout<<c1.get_count();
}
