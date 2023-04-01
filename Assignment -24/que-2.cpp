
#include<iostream>
using namespace std;
int highest_digit(int no)
{
 int dig1,maxi=0;
 while(no)
 {
   dig1=no%10;
   no=no/10;
   if(maxi<dig1)
    maxi=dig1;

 }
return maxi;
}
int main()
{
 int no;
 cout<<"Enter a number to check highest digit is"<<endl;
 cin>>no;
 cout<<"Highest Number is "<<highest_digit(no);
}
