/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct myStruct {
    
    int i;
    string s;
    bool y;
    
    void Test(){
        cout<<"Test"<<endl;
    }
};

int main()
{
    struct myStruct gg;
    gg.i=50;
    gg.s="Enas";
    gg.y=true;
    cout<<gg.i<<gg.s<<gg.y<<endl;
    gg.Test();
    

    return 0;
}
**************************************

// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

typedef struct {
    string name;
    int phone;
    float gpa;
}Info;

int main()
{
    Info _Info[0];
    _Info[0].name = "enas";
    _Info[0].phone = 5240558;
    _Info[0].gpa = 3.8;
    cout<<_Info[0].name<<endl;
    cout<<sizeof(_Info[0].phone)<<endl;
    return 0;
}
