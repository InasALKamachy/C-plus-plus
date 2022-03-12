#include "pch.h"
#include<iostream>
using namespace std;
TEST(TestCaseName, TestName) {
	//Arrange:
	int value;
	int total=0;
	cout << "Please Enter your interger value: " << endl;
	cin >> value;
	total += value;
	cout << total << "//" << value << endl;
  EXPECT_EQ(total, value);
  
  cout << "Thank you your value was entered!!" << endl;
}
