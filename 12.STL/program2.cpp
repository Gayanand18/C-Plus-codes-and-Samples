// sample program for STL Class(List)

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> v = {2,4,6,8,10};
    v.push_back(20);
    v.push_back(30);
    v.pop_back();
    cout<<"Using for each loop"<<endl;
    for(int x:v)
        cout<<x<<endl;

    list <int> :: iterator itr;
    cout<<"Using iterator"<<endl;
    for(itr = v.begin();itr!= v.end();itr++)
        // cout<<*itr<<endl;
        cout<<++*itr<<endl;

    cout<<"Using for each loop"<<endl;
    for(int x:v)
        cout<<x<<endl;
}