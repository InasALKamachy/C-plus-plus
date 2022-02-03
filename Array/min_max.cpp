/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
double min,max;
int n;
double total(0);
int myArray[20];
cout<<"Enter 20 number as blellow"<<endl;
cin>>n;
for (int i=0;i<=n;i++){
    cout<<"enter your "<<i+1<<" number"<<endl;
    cin>>myArray[i];
    min = myArray[0];
max = myArray[0];
total = 0;
}

for(int i=1;i<=n;i++){
    if (myArray[i]<min) min=myArray[i];
    if (myArray[i]>max) max = myArray[i];
    total+=myArray[i];

    
}
cout<<"***************The OutPut of the program********************"<<endl;
cout<<"The min is:"<<min<<endl;
cout<<"The max is: "<<max<<endl;
cout<<"The total is"<<total<<endl;
cin.get();
}
