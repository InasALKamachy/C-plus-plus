//give new value every time we run 

#include<iostream>
#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main(void) {

	srand((unsigned int)time(NULL));

	for (int i; i < 6; i++) 
		cout << rand() << endl;
	
	cin.ignore();
	cin.get();
}
