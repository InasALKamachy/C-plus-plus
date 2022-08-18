//ios --> ostream istream fstream

//ostream istream  **>>input output
// ofstream ifstream  **>> FILES
#include<iostream>
#include<fstream> //File deals
using namespace std;

int main(){
//create file

ofstream enasfile("E:/tt.txt");
cout<<"Enter employer name and id: \n";

cout<<"press ctr+z to exit\n";
int id;
char name[15];

while(cin>>name>>id)
    {

    enasfile<<name<<" :: "<<id<<endl;
}



return 0;
}
