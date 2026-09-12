#include<iostream>
using namespace std;

int main()
{
    // 1D Array
    int arr[5]; // starts with zero index having same data type 
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; 
    arr[3] += 10; 
    cout << arr[3] << endl; 

    // 2D Array
    int arr2[3][4]; // 3 rows and 4 columns
    arr2[1][2] = 5; // assigning 5 to the element at row 1, column 2
    cout << arr2[1][2] << endl; // printing the element at row 1, column 2
    return 0;
}
