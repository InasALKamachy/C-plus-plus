#include "pch.h"
#include<iostream>
using namespace std;

int max(int num1, int num2) {
	cout << "Hello please enter your number:: " << endl;
	cin >> num1;
	cin >> num2;
	if (num1 > num2) return num1;
	else return num2;
}
class Increament {
	int value;
public:
	Increament(int v1) {
		SetValue(v1);
		GetValue();

	}
	void SetValue(int v1) {
		value = v1;
	}
	int GetValue() {
		return value;
	}
};
TEST(TestCaseName, TestName) {
	//Arrange:
	Increament in1(5);
	//Act
	in1.SetValue(950);
	in1.GetValue();
	
	
  EXPECT_EQ(in1.GetValue(), 950);
  //ASSERT_TRUE, ASSERT_FALSE,ASSERT_NE(1,1), ASSERT_LT(1,2), ASSERT_LE(2,3), ASSERT_GT(3,1), ASSERT_GE(3,2), ASSERT_STREQ("E","E"), ASSERT_STRNQ("E","O")
  // SAME AS EXPECT , NE= NOT EQUAL, LT= LESS THAN, GT= GREATER THAN, GE= GREATER TAHN AND EQUAL, 
  
  cout << "Thank you your value was entered!!" << endl;
}



//////
TEST(TestCaseName, Test_Max) {
	//Arrange:
	int n1 = 50;
	int n2 = 80;
	
	//Act
	max(50, 80);


	EXPECT_EQ(max(50,80), 80);
	//ASSERT_TRUE, ASSERT_FALSE,ASSERT_NE(1,1), ASSERT_LT(1,2), ASSERT_LE(2,3), ASSERT_GT(3,1), ASSERT_GE(3,2), ASSERT_STREQ("E","E"), ASSERT_STRNQ("E","O")
	// SAME AS EXPECT , NE= NOT EQUAL, LT= LESS THAN, GT= GREATER THAN, GE= GREATER TAHN AND EQUAL, 

	cout << "Thank you your value was entered!!" << endl;
}

