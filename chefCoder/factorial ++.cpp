#include<iostream>
using namespace std;

int main(){
    int T,N;
    int factorial=0;

    cin>>T;
    for(int i=0;i<T;++i){
        cin>>N;
        if(N<0){
            cout<<"ERROR!"<<endl;
        }
        else for(int j=0;j<=N;++j){
            factorial+=j;

        }
        cout<<factorial<<endl;
    }

}
