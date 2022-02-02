#include<iostream>
#include<cmath>
using namespace std;

int main() {
unsigned int seed;

cout<<"Enter number for srand : "<<endl;
cin>>seed;
srand(seed);

for (int i=0; i < 6; i++) 
	cout << rand() << endl;
  cin.ignore();
	cin.get();
}
//1804289383
//846930886
//1681692777
//1714636915
//1957747793
//424238335
