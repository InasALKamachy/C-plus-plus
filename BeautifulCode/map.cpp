/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stack>
#include<queue>
#include<map> // we can used unordered_map for unorder in alphabetic and number 
#include<string>
using namespace std;


int main(){

   map<string,string>Dictionary;
   Dictionary.insert(pair<string, string>("apple", "elma"));
   Dictionary.insert(pair<string, string>("mother", "anni"));
   Dictionary.insert(pair<string, string>("yes", "evit"));
   Dictionary.insert(pair<string, string>("no", "hair"));

   for(auto pair:Dictionary){
    cout<<pair.first<<"-"<<pair.second<<endl;
   }

    return 0;
}
