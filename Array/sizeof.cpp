/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
char myArray[] = {'a','b','c','d'};
char myArray1[]="abcd";

for (int i=0; i<sizeof(myArray);i++){
    cout<<myArray[i]<<',';
    
}
cout<<endl<<endl;

for (int i=0; i<sizeof(myArray1);i++){
    cout<<myArray1[i]<<',';
}
cin.get();
}

****************
    //number of elements
    cout<<sizeof(arr1)/sizeof(arr1[0])<<endl;
    system("pause");
