#include<iostream>
using namespace std;
class Pascal_Triangle
{
 public:
 int factorial(int no)
 {
  int fact=1;
  while(no>=1)
  {
   fact*=no;
   no--;
  }
  return fact;
 }

 int combination(int n,int r)
 {
    return (factorial(n)/( factorial(n-r)*factorial(r)) );

 }

 void Pascal()
 {
 int r;
   for(int i=0;i<=4;i++){
     r=0;
    for(int j=0;j<=4+i;j++){
    if(j<4-i)
    cout<<" ";
   else
   {

    if(i%2==0)
    {
     if(j%2==0){
       cout<<combination(i,r);
       r++;
     }
      else
       cout<<" ";
    }
    else
    if(i%2!=0)
     {
     if(j%2!=0){
     cout<<combination(i,r);
     r++;
     }
      else
       cout<<" ";
    }

    }

    }
    cout<<endl;
   }

 }
};
int main()
{
 Pascal_Triangle p1;

 p1.Pascal();


}
