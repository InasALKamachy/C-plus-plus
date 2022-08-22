/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*

Stack using pointer // to solve size problem, if size is big and i dont use it
to use this method::

we put as element as we want but every element is pointed to another 
every element has two value

val and pointer which named all node

how to build stack as pointer past application 

every node consist of (value and pointer )

use struct named node 
template<class t> T
struct node{
t item;
 node *next;
}

to add element to node
'a' char 
node *next->null
stacktop = new node

to add another item // // // // // // 
to connected to add push()
1-newNode->next = stackTop  //make the value point to the top of last one;
2-stackTop = newNode // as we added  make the stack to point to new node;

to add node c>>
to pop()
temp = stackTop
stackTop = stackTop->next

push ,pop , gettop, display 




*/

#include <iostream>

using namespace std;


template<class t>  // use generic
class stack{
struct node{
t item;
node *next;//datatype of pointer is node;
};
node*top,*curr;//pointer point to the node;
public:
stack(){
 top=nullptr;
}

void push(t newItem){
node *newItemPtr = new node; //1- prepare location for node(item, ptr)
if(newItemPtr==NULL)
    cout<<"Stack push cannot allocated"<<endl;
else{
    newItemPtr->item = newItem; //2- assign the item of ptr to new item
newItemPtr->next = top; // 3-assign the next of newitem to the top
top = newItemPtr; // 4-assign the top to the node
}
}
bool isEmpty(){
return top==NULL;
}
void pop(){
if(isEmpty())
    cout<<"The stack is NULL"<<endl;
else{

    node*temp = top;
    top = top->next;
    temp = temp->next = NULL;
    delete temp;

}
}

void pop(t&stackTop){
if(isEmpty())
    cout<<"The stack is NULL"<<endl;
else{
    stackTop = top->item;
    node*temp = top;
    top = top->next;
    temp = temp->next = NULL;
    delete temp;

}
}

void getTop(t &topElement){
if(isEmpty())
    cout<<"The stack is NULL"<<endl;
else{
    topElement = top->item;

}
}
void show(){

curr = top;
cout<<"\nItem in the stack:"<<endl;
cout<<"[";
while(curr!=NULL)
{

    cout<<curr->item<<" ";
   curr = curr->next;
}
cout<<"]";
}
};


int main(){

    stack<int>ob;
    ob.push(10);
    ob.push(5);
    ob.push(5);
    ob.push(1);
    ob.show();
    ob.pop();
    ob.pop();
    ob.show();
    int x = 0;
    ob.getTop(x);
    cout<<x<<endl;
return 0;
}
