/////////////////////////////////////////////////create new file and write in it:: 
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream write_file("write.txt");
    if(write_file.is_open()){
        write_file<<"This is the first line to write in file\n";
        write_file.close();
    }
    else cout<<"could not open the fiel";
    return 0;
}
///////////////////////////////////////////////////////////////
//////////// open exist file and read it:: 

#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string line;
   ifstream write_file("write.txt");
    if(write_file.is_open()){
       while(getline(write_file, line)){
           cout<<line<<"\n";
       }
    }
    else cout<<"could not open the fiel";
    return 0;
}
