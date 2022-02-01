/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=5;i++){ //rows
        cout<<"the row number is :"<<i<<" ";
        for(int j=1;j<=6;j++){ //columns
            cout<<"$|";
        }
        cout<<endl;
    }
}
