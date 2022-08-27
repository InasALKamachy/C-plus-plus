#include<iostream>
using namespace std;

class LinkedList{
    struct Node{
        int Value;
        Node*Next;
    };
    Node*Head=NULL;
    public:
    void InsertFront(int element){
        Node* newItem = new Node();
        newItem->Value = element;
        
        if(Head==NULL){
            newItem->Next = NULL;
            }
        else{
            newItem->Next = Head;
             }
             Head = newItem;
            }
    void InsertEnd(int element){
        Node* newItem = new Node();
        newItem->Value = element;
        newItem->Next = NULL;
        
        Node*flag = Head;  // prepare new node to make it point to the head
        while(flag->Next!=NULL){ // Till the flag is null
            flag = flag->Next;
            }
            flag->Next = newItem;
    }
    void show(){
        Node*flag = Head;//prepare new node to point to head
        while(flag!=NULL){
            cout<<flag->Value<<"-->";
            flag = flag->Next;
        }
    }
    
};

int main(){
    
    LinkedList ob;
    ob.InsertFront(1);
    ob.InsertFront(2);
    ob.InsertFront(1);
    ob.InsertFront(10);
    ob.InsertEnd(1252);
    ob.show();
}
