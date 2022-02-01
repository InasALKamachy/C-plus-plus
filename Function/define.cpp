#include <iostream>
using namespace std;

void star();

int main()
{
cout<<"Welcome"<<endl;
star();
cout<<"Welcome"<<endl;
star();

cin.get();
}

void star(){
    for(int i=1;i<5;i++){
        cout<<"The row is: "<<i;
        for(int j=1;j<5;j++){
            cout<<'*';
        }
        cout<<endl;
    }
}
