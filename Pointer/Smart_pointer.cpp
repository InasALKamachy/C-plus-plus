#include<iostream>
#include "pch.h"

//normal class is act as stack that when finish is will be empty 
// normal pointer act as heap when finish we must put delete to delete it 

// smart pointer act as heap but it delete automaticly
using namespace std;

class Square {
private:
	int my_value;
public:
	Square(int value) {
		SetSquare(value);
		GetSquare();
	}

	void SetSquare(int value) {
		cout << "HEllo from the begin of program" << endl;
		my_value = value;
	}
	int GetSquare() {
		return my_value;
	}
	int area() {
		return my_value * my_value;
	}
	~Square() {
		cout << "End of progrma" << endl;
	}
};
/*
int main() {
	//heap we must delete after finish 
	Square* s1 = new Square(20);//Square s1(20);
	
	cout << s1->area() << endl;//cout<<s1.area()<<endl;

	cout << "Hello from the main" << endl;
	delete s1; // not written if we not use smart pointer
}*/


int main() {
	//smart-pointer
	std::shared_ptr<Square> s1(new Square(20));

	cout << s1->area() << endl;//cout<<s1.area()<<endl;

	cout << "Hello from the main" << endl;
	//delete s1; // not written if we not use smart pointer
	return 0;
}
