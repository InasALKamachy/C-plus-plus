#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int result;
    char op;
    cout<<"enter first number"<<endl;
    cin>>x;
    cout<<"enter second number"<<endl;
    cin>>y;
    cout<<"enter the operator symbol"<<endl;
    cin>>op;
   /* switch(op){
        case'+':result = x+y;break;
        case'-':result =x-y;break;
        case'*':result =x*y;break;
        case'/':result =x/y;break;
        default:cout<<"Null";break;
    }*/
    result = (op =='+')?x+y:(op =='-')?x-y:(op =='*')?x*y:(op =='/')?x/y:x%y;
    cout<<"The result is :"<<result<<endl;
    return 0;
