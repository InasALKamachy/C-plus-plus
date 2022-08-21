/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int i;
const int Max_size=5;
class stack{
private:
   int item;
   int top;
   int arr[Max_size];
public:
    stack(){
    cout<<"your stack is created\n";
    cout<<"Enter the size of your array\n";
    top = -1;


    }
    void push(){
        for(int i=0;i<=Max_size-1;i++){
            top++;
            cin>>arr[i];
        }

    }
    void pop(){
    if(top<0) cout<<"EMPTY"<<endl;
    else top--;
    }
    void pop(int &elemet){
        if(top<0) cout<<"Empty"<<endl;
        else {



            arr[top] = elemet;
            top--;
        }
    }

    void show(){
        cout<<"[";
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    }
};
int main(){
    stack ob;
    ob.push();

    ob.show();
    ob.pop();
    ob.pop();
    ob.show();
return 0;
}
