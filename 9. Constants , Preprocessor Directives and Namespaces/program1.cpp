// Sample program for preprocessor directives

#include <iostream>
using namespace std;

#define max(x,y)  (x>y?x:y)
#define msg(x)  #x
#ifndef PI
    #define PI 3.1425
#endif
int main()
{
    cout<<PI<<endl;
    cout<<max(10,12)<<endl;
    cout<<msg(x)<<endl;

    return 0;
}