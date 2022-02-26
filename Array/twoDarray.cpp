/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int row =2;
    int col = 3;
   int myArray[row][col] = {{1,2,3},{11,22,33},{222,333,444}};
   for (int i=0;i<=row;i++){
       for(int j=0;j<=col;j++){
 cout<<myArray[i][j]<<'|'; //or "\t"
       }
      cout<<endl;
       
   }

    return 0;
}
