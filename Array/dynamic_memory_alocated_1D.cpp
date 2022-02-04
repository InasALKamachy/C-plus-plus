/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int size;
int* myArray = new int[size];
cout<<"Enter the size of your array : "<<endl;
cin>>size;
for (int i=0;i<size;i++){  // full the array with value
    myArray[i]=i*3+1;
    
}
cout<<"Your new arrya is : "<<endl;  //print array
for (int i=0;i<size;i++){
    cout<<myArray[i]<<',';
}
delete myArray; //dealocate array;
myArray=NULL;

//print after delete
cout<<"\n\nThe null array is:"<<myArray;
cin.ignore();
cin.get();
   }


