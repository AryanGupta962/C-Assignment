#include<iostream>
#include<cmath>
using namespace std;
class Photon
{
 protected:
 double wavelength;
 public:
  Photon(double wave)
  {
   wavelength=wave/pow(10,-10);
  }
};
class PhotonEnergy:public Photon
{
 double E;
public:
 PhotonEnergy(double value):Photon(value)
 {

 }
 void calc_PhotonEnergy()
 {
   E=(6.626*(pow(10,-34))*3*(pow(10,8)))/wavelength;
  cout<<"Value of Photon Energy is : "<<E;
 }
};
int main()
{
 PhotonEnergy p(0.5);
 p.calc_PhotonEnergy();

}
