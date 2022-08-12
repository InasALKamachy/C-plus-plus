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
          Unray operator -(){
          x = -x;
          y = -y;
          return *this;
          }
          Unray operator++(int){ // PostFix
           Unray temp;
           temp = *this;
            x++;
            y++;
           return temp;
          }
          bool operator!(){
          return(x==0&&y==0);
          }
          Unray operator +=(Unray b){
          x+=b.x;
          y+=b.y;
          return *this;
          }
          bool operator ==(Unray b){
          Unray d;
          return (d.x ==b.x&&d.y == b.y);
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
Unray x(0);
if(!x) cout<<"TRUE"<<endl;
else cout<<"FALSE"<<endl;
x.show();

Unray n(10,10),m(10,10);
if(n==m) cout<<"TRUE"<<endl;
else cout<<"FALSE"<<endl;
n+=m;
n.show();



return 0;
}
