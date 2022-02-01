/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int x,n;
int total(0);
int min,max;
float avg;
do{
    cout<<"Please Enter the length of your list: "<<endl;
    cin>>n;
    
}
while(n<0 || n>20);
cout<<"Enter Your number ["<<1<<"]"<<endl;
cin>>x;
total+=x;
min=x;
max=x;
for(int i=2;i<n;i++){
    cout<<"Enter your num number ["<<i<<"]"<<endl;
    cin>>x;
    if(x>max) max=x;
    if(x<min) min =x;
    total+=x;
    
}
cout<<"\n\n The Max of number is:"<<max<<endl;
cout<<"\n\n The min of numbers is:"<<min<<endl;
cout<<"\n\n The total of numbers is: "<<total<<endl
cin.get();
}
