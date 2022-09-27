/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string x = "aseel";
    vector<string> inas = {"enas", "aseel", "mary", "yusu","bayby"};
    sort(inas.begin(), inas.end());
    cout<<"SORTED"<<endl;
    for(auto x:inas){
        cout<<x;
    }
    for(int i=0;i<inas.size();i++){
        cout<<inas[i]<<endl;
        if(inas[i]==x){
            cout<<"mach"<<endl;
            break;
        }
    }

    return 0;
}



****************************

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
int x = 8;
    vector<int> v = {34,3,22,5,6};
    sort(v.begin(), v.end(), greater<int>());
    cout<<"SORTED"<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
   
    return 0;
}
