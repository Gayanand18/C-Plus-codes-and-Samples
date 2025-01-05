// Sample program of Inherintance 

#include <iostream>
using namespace std;
class Base
{
public:
 int a;
 void display()
 {
 cout<<"Display of Base "<<a<<endl;
 }
};
class Derived:public Base
{
public:
 int b;
 void show()
 {
 cout<<"Show of Derived "<<a<<" "<<b<<endl;
 }
};
int main()
{
    Base b;
    b.a=100;
    b.display();
    Derived d;
    d.a = 50;
    d.b = 40;
    d.show();
}