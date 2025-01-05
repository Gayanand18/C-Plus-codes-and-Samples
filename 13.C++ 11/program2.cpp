// Sample program for lambda expression

#include<iostream>
using namespace std;
int main()
{
    []() {cout<<"HEllO"<<endl;}();


    [](int x, int y){cout<<"Sum is "<<x+y<<endl;}(10,30);

    cout<<([](int x, int y){return x+y;}(10,30))<<endl;

    int a = [](int x, int y) ->int {return x + y;}(10,30);
    cout<<a<<endl;

    int b= 10;
    [b](){cout<<b<<endl;}();


}