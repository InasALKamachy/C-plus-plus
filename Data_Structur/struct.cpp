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
