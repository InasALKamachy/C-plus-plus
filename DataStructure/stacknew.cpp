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
    int val;
    int top;
    int arr[Max_size];
    public:
    stack(){
        top = -1;
}
void push(int item){
    if(top >=Max_size-1){
        cout<<"Your Stack is Full!\n";
    }else{
        top++;
        arr[top] = item;
    }

}
void pop(){
    if(is_Empty())
        cout<<"Your Stack is Empty!!\n";
else
         top--;


}

void pop(int &item){
    if(is_Empty())
        cout<<"Your Stack is Empty!!\n";
else{

    item = arr[top];
}
         top--;


}
void getTop(){
if(is_Empty())
    cout<<"Stack is Empty\n";
else{

    cout<<"The Last Element is : "<<top<<endl;
}
}
bool is_Empty(){
    return (top<0);
}
bool is_full(){
    return top == val;
}
void show(){
for(int i = Max_size-1;i>=0;i--)

    cout<<"The\t"<<Max_size - i<<"\t"<<"Element is"<<":\t"<<arr[i]<<endl;


}
};
int main(){
stack ob;

ob.push(0);
ob.push(1);
ob.push(2);
ob.push(3);
ob.push(4);

cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
//for(int i = 0;i<6;i++){
//    ob.pop();
//}

//for(int i = 0;i<8;i++){
//    ob.push(5);
//}

ob.show();
ob.getTop();


    return 0;
}


