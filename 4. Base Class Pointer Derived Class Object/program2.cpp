// Base class pointer pointing to derived class object
// example program 1

#include<iostream>
using namespace std;
class Rectangle
{
public:
 void area()
 {
 cout<<"Area of Rectangle"<<endl;
 }
};
class Cuboid: public Rectangle
{
public:
 void volume()
 {
 cout<<"Volume of Cuboid"<<endl;
 }
};
int main()
{
    // Cuboid c;
    // c.area();
    // c.volume();
    // return 0;

    Cuboid c;
    Rectangle *ptr = &c;
    ptr ->area();
    //ptr ->volume();
    return 0;
}