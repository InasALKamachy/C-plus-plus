// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

template <class T>
class Cal{
    private:
    T num1,num2;
    
    public:
 Cal(T a, T b){
    num1= a;
    num2 = b;
}
 T addNumber(){
    return num1+num2;
 }
  T subNumber(){
    return num1-num2;
 }
  T multiNumber(){
    return num1*num2;
 }
  T divNumber(){
    return num1%num2;
 }
};


int main() {
    

    Cal<int>my_cass(20,33);
    cout<<"addition is : "<<my_cass.addNumber()<<endl;
    cout<<"subtraction is : "<<my_cass.subNumber()<<endl;
    cout<<"multiply is : "<<my_cass.multiNumber()<<endl;
    cout<<"Division is : "<<my_cass.divNumber()<<endl;


    return 0;
}
