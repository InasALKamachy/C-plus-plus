/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stack>
#include<queue> 
using namespace std;
// library :: size, push, pop, empty, top
void show(stack<int>s){
    
    while(!s.empty()){
        cout<<s.top()<<"";
        s.pop();
    }
}
int main(){
    
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
   // cout<<s.size();
    //cout<<s.empty();
    show(s);
    
    return 0;
}
