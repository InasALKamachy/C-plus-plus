//ios --> ostream istream fstream

//ostream istream  **>>input output
// ofstream ifstream  **>> FILES
//create new txt file and write text in it
#include<iostream>
#include<fstream> //File deals
using namespace std;

int main(){
//create file
ofstream enasfile("E:/enas.txt");
enasfile<<"Hello dfdfdFrom this new file"<<endl;
enasfile.close();

return 0;
}
