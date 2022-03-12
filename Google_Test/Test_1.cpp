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
  //ASSERT_TRUE, ASSERT_FALSE,ASSERT_NE(1,1), ASSERT_LT(1,2), ASSERT_LE(2,3), ASSERT_GT(3,1), ASSERT_GE(3,2), ASSERT_STREQ("E","E"), ASSERT_STRNQ("E","O")
  // SAME AS EXPECT , NE= NOT EQUAL, LT= LESS THAN, GT= GREATER THAN, GE= GREATER TAHN AND EQUAL, 
  
  cout << "Thank you your value was entered!!" << endl;
}
