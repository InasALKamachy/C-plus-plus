
// C++ program to find the
// sum of natural numbers up
// to n using recursion
#include <iostream>
using namespace std;
 
// Returns sum of first
// n natural numbers
int recurSum(int min, int max)
{
    if (max<=min) return min;
    else return max+(recurSum(min,max-1));
}
 
// Driver code
int main()
{
    
    
    cout << recurSum(2,4);
    return 0;
}
