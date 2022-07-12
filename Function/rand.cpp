#include<iostream>
#include<cstdlib>
using namespace std;


int main(){
srand(1);
for(int i=0;i<100;i++){
    cout<<rand()%(30-20+1)+20<<endl;
}

system("pause>0");
}
