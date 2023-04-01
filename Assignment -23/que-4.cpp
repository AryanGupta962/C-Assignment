#include<iostream>
using namespace std;
class Area
{
 public:
  float r;
  Area(float radius)
  {
   r=radius;
  }
  float Aor()
  {
  return 3.14*r*r;
  }
};
int main()
{
 Area a1=Area(6.2);
 cout<<"Area is ="<<a1.Aor();
}
