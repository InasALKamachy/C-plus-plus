#include <iostream>
using namespace std;

#include<cstdlib>


int main()

{
    int j;
	int degree[3][3] = { {10,10,10},
						{20,20,20},
						{30,30,30} };
	double s1= 0;
	int av[3];

	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
	      
	           s1+=degree[i][j];
	          
	          		}
		av[i] = s1/3;
	    cout<<"The sumation is"<<s1<<", "<<i+1<<"The average is: "<<av[i]<<endl;
	}


	return 0;
}







