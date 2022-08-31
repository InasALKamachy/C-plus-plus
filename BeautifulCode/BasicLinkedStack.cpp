#include<iostream>
using namespace std;
template<class t>
class LinkedLi{
struct Node{
t Value;
Node* Next;
};
Node* Head, *Curr;
public:
    LinkedLi(){
    Head = NULL;
    }
    bool Empty(){
    return Head==NULL;
    }
    void addItem(t item){
    Node* newItem = new Node();
    newItem->Value = item;
    newItem->Next = Head;
    Head = newItem;
    }
    void delItem(){
    Node*newItem = Head;
    Head = newItem;
    Head = Head->Next;
    newItem = newItem->Next=NULL;
    delete newItem;
    }
    void getTop(){
    Node*newItem = Head;
    cout<<"The top is:<<"<<newItem->Value<<endl;
    }
    void getLast(){
    Node*flag=Head;
    if(flag->Next = NULL){
        cout<<flag->Value;
    }

    }
    void show(){

    Curr=Head;
    cout<<"[";
    while(Curr!=NULL){

        cout<<"-->"<<Curr->Value;
        Curr=Curr->Next;
    }
    cout<<"]";
    }
};

int main(){

LinkedLi<int>ob;
ob.addItem(1);
ob.addItem(2);
ob.addItem(2);
ob.addItem(5);
ob.addItem(100);

ob.delItem();
ob.getTop();

ob.show();
return 0;
}
