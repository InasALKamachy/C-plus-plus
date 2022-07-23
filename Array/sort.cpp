
#include <iostream>
using namespace std;
#include<utility>
int main () 
{
int i,j;
int ar[] = { 20, 44, 105, 2, 5 };
for (i = 0; i < 5; i++)
    {
        for(int j=0;j<5;j++){

if (ar[j] > ar[j+1])
swap (ar[j], ar[j+1]);
}
        
    }
    for(int k=0;k<5;k++){
        cout<<ar[k]<<endl;
    }
   
return 0;
}


 
 
 
 
 
