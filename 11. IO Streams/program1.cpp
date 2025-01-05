// program for file handling(for writing data to a file)

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ofstream of("Test.txt",ios::trunc);
 of<<"John"<<endl;
 of<<25<<endl;
 of<<"CS"<<endl;
 of<<"Hello my name is khan and I am not a terrorists.\nSo What is your name and Are you a terrorists?"<<endl;
 
 of.close();
 
}