/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

int main()
{
string name = "Enas mudehr ";
for (int i=0;i<name.length();i++){
    name[i] = toupper(name[i]);
}
cout<<name<<endl;
cin.get();
}
