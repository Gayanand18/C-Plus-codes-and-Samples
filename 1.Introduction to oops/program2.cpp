// Write a program for a pointer to an object in a heap

#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r1;
    rectangle *ptr;
    ptr = &r1;
    ptr ->length =10;
    ptr ->breadth = 5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;
    return 0;
}