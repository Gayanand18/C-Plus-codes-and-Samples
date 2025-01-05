// Sample program for stl class(Map)

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(1,"John"));
    m.insert(pair<int,string>(2,"Sam"));
    m.insert(pair<int,string>(3,"mith"));
    map<int,string>::iterator itr;
    for(itr = m.begin();itr != m.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    // for finding something
    map<int,string>::iterator itr1;
    itr1 = m.find(3);
    cout<<"Value found is "<<endl;
    cout<<itr1->first<<" "<<itr1->second<<endl;
}