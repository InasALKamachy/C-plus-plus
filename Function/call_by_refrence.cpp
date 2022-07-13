#include <iostream>
using namespace std;

int swap(int &x, int &y){
int z;
z = x;
x = y;
y = z;


}

int main() {
  int x = 10; int y = 20;
  cout<<x<<""<<y<<endl;
  swap(x,y);
    cout<<x<<""<<y<<endl;

  system("Pause>0");
}
