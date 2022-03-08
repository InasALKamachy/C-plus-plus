
   
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template <class T>
T time10(T num){
    return 10*num;
}
template <typename T1, typename T2>
T1 max(T1 num1, T2 num2){
    if (num1> num2) return num1;
    else return num2;
}
int main() {
    
   
    cout<<max(2.000,255*10)<<endl;
    cout<<time10(-0.2)<<endl;
    return 0;
}

////////////
