#include <iostream>
#include<string.h>
using namespace std;
#include<cstdlib>


struct car {
	string Name;
	string Color;
	int Model;
	int speed;
	void prin() {
		cout << "Hello" << endl;
	}
}car3;

void My_function(car str) {
	str.Name = "Inas";
	str.Model = 2000;
	cout << str.Name << "," << str.Model << endl;
}
car type_info(car&t) {
	cin >> t.Name;
	cout << t.Name;
	cin >> t.Model;
	cout << t.Model;
	return t;
}
int main()
{
	car* myptr;
	car car1 = { "Kia", "red", 2000, 1500 };
	myptr = &car1;
	cout << myptr->Name;
	cout << myptr->Color;
	
	return 0;
}







