#include<iostream>
using namespace std;

//  void = it does not have any return type 
// return
// parameterized
// non-parameterized

void sum(int num1, int num2) // parameterized function
{
    cout << "Sum is: " << num1 + num2 << endl;
}
void doSomething(int num) // parameterized function
{
    cout <<  num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout <<  num << endl;

}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    sum(num1, num2); // function call

    // pass by reference = it will change the value of the variable in the main function use with &
    // pass by value = it will not change the value of the variable in the main function
    int num = 10;
    doSomething(num); // function call
    cout << num << endl; 


    return 0;
}
