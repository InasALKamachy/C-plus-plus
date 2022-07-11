#include <iostream>
using namespace std;

int main() {
    int n,T;
    long double factorial = 1.0;
    cin>>T;
    for(int i=0;i<T;++i){
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial<<endl;    
    }
      }
cout<<"-------------------------------------------"<<endl;

cout<<"Thank you for your watching"<<endl;
    return 0;
      
}
