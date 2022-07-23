

//print reversed array without actually reverse it!!
#include <iostream>
using namespace std;
#include<utility>
int main()
{
    int i, j;
    int ar[] = { 20, 44, 105, 2, 5 };
    for (i = 4;i >= 0;i--) {
        cout << ar[i] <<" ";
        cout << endl;
    }



    return 0;
}



/////////// reverse arrary 
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int arr[100], tot, i, j, temp;
    cout << "Enter the Size for Array: ";
    cin >> tot;
    cout << "Enter " << tot << " Array Elements: ";
    for (i = 0; i < tot; i++)
        cin >> arr[i];
    cout << "\nThe Original Array is:\n";
    for (i = 0; i < tot; i++)
        cout << arr[i] << " ";
    j = tot - 1;
    for (i = 0; i < j; i++, j--)
    {
        swap(arr[i],arr[j]);
    }
    cout << "\n\nThe Reverse of Given Array is:\n";
    for (i = 0; i < tot; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}



