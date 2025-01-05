// Sample program for virtural Destructor

#include<iostream>
using namespace std;

class Base{
    public:
        virtual ~Base(){
            cout<<"Desturctor of Base"<<endl;
        }
};
class Derived:public Base{
    public:
        ~Derived(){
            cout<<"Destructore of Derived"<<endl;
        }
};
void fun(){
    Base *p = new Derived();
    delete p;
}
int main(){
    fun();
}