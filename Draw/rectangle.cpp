/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<endl;
    
    for(int i=1;i<=10;i++){
       for(int j = 1;j<=10;j++){
           if(i==1||i==10){
               cout<<"*";
           }
           else if(j==1||j==10){
               cout<<"*";
           }
           else cout<<" ";
           
       }
       cout<<endl;
    }
   
    return 0;
}




#include <iostream>

using namespace std;

int main()
{
    cout<<endl;
    
    for(int i=1;i<=10;i++){
       for(int j = 1;j<=10;j++){
         
           if(i==1||i==10){
               cout<<"*";
           }
           else if(i==j){
             cout<<"*";
           }
           else if(i+j==10){
             cout<<"*";
           }
           else if(j==1||j==10){
               cout<<"*";
           }
           else cout<<" ";
           
       }
       cout<<endl;
    }
   
    return 0;
}
