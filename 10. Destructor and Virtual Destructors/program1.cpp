// Sample program for destructor

#include<iostream>
using namespace std;

class Demo{
    int *p;
public:
    Demo(){
        p = new int [10];
        cout<<"Constuctor of Demo"<<endl;
    }
    ~Demo(){
        delete []p;
        cout<<"Destructor of Demo"<<endl;
    }
};
void fun(){
    Demo *p = new Demo();
    delete p;
}
int main()
{
    fun();
}