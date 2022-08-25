// CPP program to check for balanced brackets.
//FIFO  Vs LIFO
#include <bits/stdc++.h>
#include<iostream>

using namespace std;
//const int Max_size = 100;
class myQueue{

    int front, rear;
    int length;
    int *arr;
    int Max_size;

public:
    myQueue(int size){
    cout<<"Your Queue has been created"<<endl;
    arr = new int[abs(size)];
    Max_size = abs(size);
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
    void search(int x){
        int po;
    for(int i = front;i<=rear;i=(i+1)%Max_size){
          if(arr[i] == x)
          po = arr[i];
    }
      while(!po){
        cout<<"not found"<<endl;
        break;
      }
      cout<<"found"<<endl;
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
myQueue ob(1000000);
ob.enQueu(1);
ob.enQueu(2);
ob.enQueu(6);
ob.enQueu(8);
ob.search(8);
ob.show();
cout<<"ddddddddddddddddddd"<<endl;

ob.show();
cout<<ob.frontQueue()<<endl;
cout<<ob.rearQueue()<<endl;

return 0;

}
