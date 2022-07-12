#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(){
srand(time(0));//give different value every time
for(int i=0;i<100;i++){
    cout<<rand()%(30-20+1)+20<<endl;
}

system("pause>0");
}
