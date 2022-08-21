/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

const int Max_size = 5;


class stack{
private:
    int val,top;
    int arr[Max_size];
public:
    stack(){
    cout<<"Your stack is created!\n";
    top = -1;
    }
    void push(int item);///***
    void pop();
    void pop(int &item);
    bool is_Empty();
    bool is_full();
    void show();

};
void stack::push(int item){
if(stack::is_full()){
    cout<<"Your Stack is full!\n";
}
else {
    top++;
    arr[top] = item;
}}
void stack::show(){
for(int i = top;i>=0;i--){
 cout<<"[";
    cout<<arr[i]<<" ";
cout<<"]";

}
}

void stack::pop(int &item){
if(stack::is_Empty()){
    cout<<"Your stack is Empty!\n";
}
else{
    item = arr[top];
    top--;
}
}
void stack::pop(){
if(stack::is_Empty()){
    cout<<"Your stack is Empty!\n";
}
else{

   top--;
}
}
bool stack::is_Empty(){
return top<0;
}
bool stack::is_full(){
return (top>=Max_size-1);

}
int main(){
stack ob;
ob.push(2);
ob.push(52);
ob.push(55);
ob.push(24);
ob.push(10);

ob.show();
cout<<endl;
cout<<"After pop"<<endl;
ob.pop();
ob.pop();
ob.pop();
ob.pop();
ob.show();




return 0;
}
