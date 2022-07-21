#include <cctype>
#include<algorithm>
#include<cmath>
#include<utility>
#include <iostream>
using namespace std;
 
int main()
{
    int j = 0;
    char str[] = "GREEKFORGEEKS";
    char ch;
 
    while (str[j]) {
        ch = str[j];
        putchar(tolower(ch));
        j++;
    }
   // a = gcd(12,6);
    cout<<__gcd(12,6)<<endl;
 
    return 0;
}

//sqrt, __gcd, floor, ceil, min, max, 
//floor, ceil, pow, sqrt  <cmath>
//toupper, tolower <cctype>
//swap <utility>
//min, max, __gcd  <algorithm>
