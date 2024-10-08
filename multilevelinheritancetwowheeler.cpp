#include <iostream>
using namespace std;

class vehicle{
  public:
  void Vehicle (){
    cout<<"I am a vehicle"<<endl;
  }
};
class twoWheeler: public vehicle {
  public:
  void TwoWheeler(){
    cout<<"I have two Wheels"<<endl;
  }
};
class bullet:public twoWheeler{
  public:
  void Bullet(){
    cout<<"I am bullet"<<endl;
  }
};
int main(){
  bullet myBullet;
  myBullet.Bullet();
  myBullet.TwoWheeler();
  myBullet.Vehicle();
  return 0;
}