// CPP program to check for balanced brackets.
//FIFO  Vs LIFO
#include <bits/stdc++.h>
#include<iostream>
#include <cassert>
using namespace std;

const int Max_size = 100;
class myQueue{

    int front, rear;
    int length;
    int arr[Max_size];

public:
    myQueue(){
    cout<<"Your Queue has been created"<<endl;
    front = 0;
    rear = Max_size-1;
    length = 0;
    }

    void enQueu(int x){
    if(isFull()){
        cout<<"FULL!!"<<endl;
    }
    else{
    rear = (rear+1)%Max_size;
    arr[rear] = x;
    length ++;
    }
    }

    void deQueu(){
        if(isEmpty()){
            cout<<"Empty!!"<<endl;
        }
        else{
    front = (front+1)%Max_size;
    length --;
        }
    }

    bool isEmpty(){
    return length == 0;
    }

    bool isFull(){
    return length ==Max_size;
    }

    int frontQueue()
           {
    assert(!isEmpty());
    return arr[front];
           }

    int rearQueue()
    {

    assert(!isEmpty());
    return arr[rear];
    }

    void show(){
        if(!isEmpty()){
            for(int i=front; i!=rear;i=(i+1)%Max_size){
            cout<<arr[i];
        }
          cout<<arr[rear]<<endl;
        }
        else{
            cout<<"Empty"<<endl;
        }

    }

};


int main()
{
myQueue ob;
ob.enQueu(1);
ob.enQueu(2);
ob.enQueu(6);
ob.enQueu(8);
ob.show();
cout<<"ddddddddddddddddddd"<<endl;
ob.deQueu();
ob.show();

return 0;

}
