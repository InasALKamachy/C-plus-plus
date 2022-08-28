/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stack>
#include<queue>
using namespace std;
// library:: front, back, push, pop, size, empty
void show(queue<int>qq){

    while(!qq.empty()){
        cout<<"-->"<<qq.front()<<"";
        qq.pop();
    }
    cout<<endl;
}
int main(){
//Stack(LIFO)  VS Queue(FIFO)
   queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();

   // cout<<s.size();
    //cout<<s.empty();
    show(q);

    return 0;
}
