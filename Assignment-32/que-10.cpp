
#include<iostream>
using namespace std;
class Player
{
 int playerno,nom,*nog;
 string name;
public:
 Player(int no,string name,int nom)
 {
  int m;
  playerno=no;
  this->name=name;
  this->nom=nom;
  nog=new int[m];
  for(int i=0;i<nom;i++)
  {
   cout<<"Enter match "<<i+1<<" goals\n";
   cin>>*(nog+i);
  }
 }
 void display()
 {
  cout<<"player No     : "<<playerno<<endl;
  cout<<"player Name   : "<<name<<endl;
  cout<<"No of Matches : "<<nom<<endl;
  for(int i=0;i<nom;i++)
  cout<<"Match "<<i+1<<" goals is : "<<nog[i]<<endl;

 }
};

int main()
{
 Player p(1,"Aryan",5);
 p.display();
}
