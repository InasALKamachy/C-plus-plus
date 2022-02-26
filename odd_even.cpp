
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int main()
{
   int i, number;

   i=0;
   while(i<10){
        cout<<"Enter your number"<<endl;
        cin>>number;
       if(number%2==0) cout<<"YOUr number is even"<<endl;
       if(number%2!=0) cout<<"your nubmer is odd";
   }
   i ++;
    system("pause");
    return 0;
}
