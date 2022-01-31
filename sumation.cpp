/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
//y = n+(n-1)+ 
using namespace std;

int main()
{
int n = 0;
int y = 0;
cout<<"Enter your number"<<endl;
cin>>n;
while(n>0){
    y+=n;
    n--;
    
    
}
cout<<y<<endl;
cin.get();

}
