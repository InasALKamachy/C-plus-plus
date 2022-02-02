#include<iostream>
#include<string>
using namespace std;
 
int main(){
    
    string FirstName, LastName;
    int ID;
    cout<<"Enter your FirstName: "<<endl;
    getline(cin,FirstName);
    cout<<"yuo name is : "<<FirstName;
    cout<<"Enter your ID: "<<endl;
    cin>>ID;
    cin.ignore();
    cout<<"Enter your lastname "<<endl;
    getline(cin,LastName);
    cout<<"yonur name is  "<<LastName<<endl;
    return 0;
}
