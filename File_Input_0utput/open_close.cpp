//ios --> ostream istream fstream

//ostream istream  **>>input output
// ofstream ifstream  **>> FILES
#include<iostream>
#include<fstream> //File deals
using namespace std;

int main(){
//create file
ofstream enasfile("E:/enas.txt");
enasfile<<"hello";
if(enasfile.is_open()){
    cout<<"THE FILE IS OPEN\n";}
else cout<<"THE FILE IS CLOSED\n";
enasfile.close();

return 0;
}
