// program for file handling (for reading data from the file)

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ifstream ifs("Test.txt");
 string name;
 int roll;
 string branch;
 
 ifs>>name>>roll>>branch;
 cout<<name<<endl<<roll<<endl<<branch<<endl;
 ifs.close();
 
}