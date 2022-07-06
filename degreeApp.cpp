#include <iostream>

using namespace std;

int main()
{


    while(true){
    int degree;
    cout<<"enter your degree"<<endl;
    cin>>degree;
    if(degree<0 || degree>100)break;
    char x = (degree>=50)?(degree>=60)?(degree>=70)?(degree>=80)?(degree>=90)?'A':'B':'C':'D':'E':'F';
    cout<<x<<endl;
    }
    return 0;

}
