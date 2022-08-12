#include<iostream>
using namespace std;

class Unray{
private:
          int x,y;
public:
          Unray(int a=0, int b=0){
                    x = a;
                    y = b;
          }

          void show(){
          cout<<x<< " - "<<y<<endl;
          }
          Unray operator++(int){
           Unray temp;
           temp.x = x++;
           temp.y = y++;
           return temp;
          }
          ~Unray(){
          cout<<"DEconstructure"<<endl;
          }

};

int main(){
Unray ob;
ob++;
ob.show();

return 0;
}
