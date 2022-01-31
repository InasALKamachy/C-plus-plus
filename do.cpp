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
int n;
do{
    cout<<"enter your number between 1 and 70: "<<endl;
    cin>>n;
    
    
}
while(!(n>=1 && n<=70));
cout<<"Your number is: "<<n<<endl;
cin.get();
}
