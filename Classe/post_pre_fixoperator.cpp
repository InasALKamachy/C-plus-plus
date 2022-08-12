#include<iostream>
using namespace std;

class Unray{
private:
          int x,y;
public:
          Unray(int x=0, int y=0){
                    this->x = x;
                    this->y = y;
          }

          void show(){
          cout<<x<< " - "<<y<<endl;
          }
          Unray operator++(int){ // PostFix
           Unray temp;
           temp = *this;
            x++;
            y++;
           return temp;
          }
          Unray operator++(){  //postfix

          this->x++;
          this->y++;
          return *this;
          }
          ~Unray(){
          cout<<"DEconstructure"<<endl;
          }

};

int main(){
Unray ob(10,20);
Unray k = ob++; //
cout<<"postfix of ob++"<<endl;
k.show();
ob.show();
Unray ob1(20,30);
Unray k1 = ++ob1; //
cout<<"prefix of ++ob"<<endl;
k1.show();
ob1.show();


return 0;
}
