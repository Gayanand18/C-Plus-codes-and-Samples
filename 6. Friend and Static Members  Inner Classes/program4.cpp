// example program for inner nested class

#include <iostream>
using namespace std;
class Outer{
    public:
    void fun(){
        i.display();
    }
    class Inner{
        public:
        void display(){
            cout<<"Display of Inner class"<<endl;
        }
    };
    Inner i;
};
int main(){
    Outer::Inner i;
    i.display();
}