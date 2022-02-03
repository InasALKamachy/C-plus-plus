/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int myArray[100];
cout<<myArray[0]<<endl;
cout<<myArray[100]<<endl;
for (int i=100;i>=0;i--)
  cout<<myArray[i]<<',';
  cin.get();
  return 0;
}
