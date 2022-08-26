/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class arrayList{
    int *arr;
    int length;
    int Max_size;

    public:
    arrayList(int s){
        cout<<"The arrayList is created!\n";
        Max_size = s;
        arr = new int (abs(s));

        length = 0;

    }
    bool isEmpty(){/////////////ok
        return length == 0;
    }
    bool isFull(){////////////ik
        return length == Max_size;
    }
    int getSize(){ //////ok
    return length;
    }


    void addArray(int pos, int x){
          if(isFull()){
               cout<<"FULL"<<endl;}
               else if(pos<0||pos>=Max_size){
                cout<<"Out of Range"<<endl;
               }
               else{
                length++;
                for(int i=length;i>pos;i--){
                arr[i] = arr[i-1];
                arr[pos] = x;

                }
               }
   }
   void insertAtEnd(int element){
   if(isFull()){
    cout<<"FULL"<<endl;
   }

   else {
        length++;
        arr[length] = element;


         }}
    bool search1(int element){
        int s;
    for(int i=0;i<=length;i++){
        if(arr[i]==element){
             s= 1;
             break;
        }

         else s=0;
    }
    if(s==1) cout<<"FOUND"<<endl;
    else cout<<"NOT FOUND"<<endl;
    }



    void insertNoDuplicate(int element){
    if(search1(element)==true){
        cout<<"YOUR element is existed"<<endl;
    }
    else{
        insertAtEnd(element);
    }
    }
    void updateAt(int pos, int element){
    if(pos<0||pos>=Max_size){
                cout<<"Out of Range"<<endl;
               }
    else{
        arr[pos] = element;

    }
    }
    void delArray(int x){
        if(isEmpty()){
            cout<<"EMPTY"<<endl;
        }
        else{
            for(int i=0;i<=length;i++){
                arr[i]=arr[i+1];
                }
                 length--;
        }
        }


    void show(){
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
~arrayList(){
    cout<<"YOUr eldfa"<<endl;
delete[]arr;
}

};

int main()
{
   arrayList ob(100);
   ob.addArray(0,10);
   ob.addArray(1,80);
   ob.addArray(2,70);
   ob.addArray(3,20);
   ob.addArray(4,50);
   ob.addArray(5,85);
   ob.addArray(6,25);
   ob.addArray(7,10);




   ob.show();
   cout<<ob.search1(541);
return 0;
}
