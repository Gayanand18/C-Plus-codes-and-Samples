// Base class pointer pointing to derived class object
// example program 1

#include<iostream>
using namespace std;
class BasicCar
{
public:
 void start()
 {
 cout<<"Car started"<<endl;
 }
};
class AdvanceCar: public BasicCar
{
public:
 void playMusic()
 {
 cout<<"Music Playing"<<endl;
 }
};

int main()
{
    // AdvanceCar a;
    // a.playMusic();
    // a.start();
    // return 0; 

    AdvanceCar a;
    BasicCar *ptr = &a;
    ptr ->start();
    //ptr->playMusic();
    return 0;
}