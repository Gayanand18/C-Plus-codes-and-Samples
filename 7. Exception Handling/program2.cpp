//  Program for all catch blocks

#include<iostream>
using namespace std;
int main()
{
    try{
        throw "Hello there!";
    }catch(int e){
        cout<<"int catch"<<endl;
    }catch(double e){
        cout<<"double catch"<<endl;
    }
    catch(...){
        cout<<"all catch"<<endl;
    }


}