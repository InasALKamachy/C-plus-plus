#include<iostream>
using namespace std;

class Unray{
private:
          int x,y,l;
public:
          Unray(int x=0, int y=0, int l=0){
                    this->x = x;
                    this->y = y;
                    this->l = l;
          }

          void show(){
          cout<<x<< " - "<<y<<" -"<<l<<endl;
          }
         bool operator==(Unray b){
         return(x==b.x&&y==b.y&&l==b.l);
         }
          ~Unray(){
          cout<<"DEconstructure"<<endl;
          }

};

int main(){


Unray n(10,10,10),m(10,50,10);
if(n==m) cout<<"TRUE"<<endl;
else cout<<"FALSE"<<endl;




return 0;
}
