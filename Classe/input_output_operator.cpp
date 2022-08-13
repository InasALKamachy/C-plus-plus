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
          Unray operator+(Unray d){
          Unray b;
          b.x = x+d.x;
          b.y = y+d.y;
          b.l = l+d.l;
          return b;
          }
          Unray operator+(int d){
          Unray b;
          b.x = x+d;
          b.y = y+d;
          b.l = l+d;
          return b;
          }



         bool operator==(Unray b){
         return(x==b.x&&y==b.y&&l==b.l);
         }
         friend Unray operator+(int d, Unray b);
         friend istream& operator >>(istream &input, Unray& b);
         friend ostream& operator <<(ostream &input, Unray& b);
          ~Unray(){
          cout<<"DEconstructure"<<endl;
          }

};
          Unray operator+(int d, Unray b){
          Unray c;
          c.x = d + b.x;
          c.y = d + b.y;
          c.l = d + b.l;
          return c;
          }

          istream& operator >>(istream &input, Unray &b){
           input>>b.x>>b.y>>b.l;
           return input;
          }
          ostream& operator <<(ostream &input, Unray &b){
           input<<b.x<<b.y<<b.l;
           return input;
          }
int main(){
Unray c1(3,1), c2(1,2), c3;
cin>>c3;
cout<<c3;
c3 = c1+c2;
c3.show();
c3 = c1+10;
c3.show();
c3 = 10+c1;
c3.show();




Unray s,s1,s2;


return 0;
}
