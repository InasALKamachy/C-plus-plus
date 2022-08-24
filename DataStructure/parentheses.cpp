/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
#include<stack>
using namespace std;


bool express(string par){
    
    stack<char>s;
    for(int i = 0;i<par.length();i++){
        if(s.empty()){
            s.push(par[i]);
        }
        else if((s.top()=='('&&par[i]==')')
            ||(s.top()=='{'&&par[i]=='}')
            ||(s.top()=='['&&par[i]==']'))
                        s.pop();
            }
    if(s.empty()){
      return true;
    }
    else{
        return false;
    }
}
int main()
{
    
    string para;
    int t = 2;
    for(int i=0;i<=t;i++){
        cin>>para;
        if(express(para)) {
            cout<<"TRUE"<<endl;
        }
        else cout<<"FALSE"<<endl;
    }
    
    return 0;
}
