#include <iostream>
using namespace std;

int min(int num1, int num2);

int main()
{
    int x,y;
cout<<"Enter your first number: "<<endl;
cin>>x;
cout<<"Enter your second number: "<<endl;
cin>>y;
int z = min(x,y);
cout<<"The min value is: "<<z<<endl;
cin.get();
}
int min(int num1, int num2){
if (num1<num2) return num1;
else return num2;
}
