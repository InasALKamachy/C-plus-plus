/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct Stack{
    
    int arr[100];
    int top = -1;
    
    void push(int val){
        if (top ==99) return;
        top++;
        arr[top] = val;
        
    }
    
    void pop(){
        if(isEmpty()) return;
        top--;
    }
    
    int top_val(){
        if(isEmpty()) return -1;
        return arr[top];
    }
    
    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
};

int main(){
    Stack stk;
    stk.push(9);
    stk.push(3);
    stk.push(10);
    while(!stk.isEmpty()){
        cout<<stk.top_val()<<endl;
        stk.pop();
    }
}
