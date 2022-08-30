/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<map>
#include<list>
#include<string>
using namespace std;

int main()
{
   list<string>machineLearning={"CNN"," ANN"," FNN"};
   list<string>webDevelopment = {"HTML", " CSS"," JAVASCRIPT"," PHP"," ARAVEL"};
   list<string>mobileApp = {"Dart", " Flutter"," androidStudio"};
   map<string,list<string>>SeniorProgrammer;
   SeniorProgrammer.insert(pair<string,list<string>>("ML",machineLearning));
   SeniorProgrammer.insert(pair<string,list<string>>("web",webDevelopment));
   SeniorProgrammer.insert(pair<string,list<string>>("mobile",mobileApp));
   
   for(auto pair:SeniorProgrammer){
       cout<<pair.first <<" --";
       for(auto attak:pair.second)
       cout<<attak;
       cout<<endl;
   }
   
   return 0;
}
