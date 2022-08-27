/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class LinkedList{
    struct Node
    {
    int Value;
    Node* Next;
    };
    Node* Front;
    
    public:
    LinkedList(){
        cout<<"YOUR LINKED LIST HAS BEEN CREATED!\n";
        Front->Value = 0;
        Front->Next = nullptr;
    }
    void insertINTop(int Item){
        Node* NewItem = new Node();
        NewItem->Value = Item;
        NewItem->Next = Front;
        Front = NewItem;
            }
    void show(){
        while(Front!=nullptr){
            cout<<Front->Value<<endl;
            Front = Front->Next;
        }
    }
};

int main()
{
    
    LinkedList ob1;
    ob1.insertINTop(-1);
    ob1.insertINTop(3);
    ob1.insertINTop(8);
    ob1.insertINTop(5);
    ob1.show();
    
    return 0;
}
