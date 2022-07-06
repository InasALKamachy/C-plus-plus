#include <iostream>

using namespace std;

int main()
{


    int x[3];
    for (int i=0;i<3;++i){
        cout<<"Enter the element of array:"<<i+1<<endl;
        cin>>x[i];

    }
    for (int j=0;j<3;++j){
        cout<<"element: "<<j+1<<"is "<<x[j]<<endl;
    }
    return 0;

}
