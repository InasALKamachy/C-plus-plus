#include <iostream>

using namespace std;

int main()
{
    int x = 1;

    int result;
    while(x<=5){
            int y = 1;
        while(y<=5){
          cout<<x<<"*"<<y<<"="<<x*y<<endl;
            y++;

        }
        x++;

    }

    return 0;

}
