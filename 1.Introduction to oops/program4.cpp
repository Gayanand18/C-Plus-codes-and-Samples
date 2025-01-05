// Program for constructor

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }
    void setLength(int l){
        length = l;
    }
    void  setBreadth(int b){
        breadth = b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length* breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main() 
{
    Rectangle r1;
    cout<<r1.area()<<endl;
    // Rectangle r1(10,5);
    // cout<<r1.area()<<endl;
}