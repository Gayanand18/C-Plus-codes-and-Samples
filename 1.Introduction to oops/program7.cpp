//program for scope resolution 
#include<iostream>
using namespace std; 
class  Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int area()
    {
        return length* breadth;
    }
    int perimeter();
};
    int Rectangle::perimeter(){
        return 2*(length + breadth);
    }
int  main()
{
    Rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
}