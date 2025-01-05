// program for deep copy constructor

#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
 Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r)
    {
        length = r1.l;
        breadth = r1.b;
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
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<r2.area()<<endl;
}
