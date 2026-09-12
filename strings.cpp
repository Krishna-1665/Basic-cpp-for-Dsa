#include<iostream>
using namespace std;

int main()
{
    string s = "Krishna";
    int len = s.size(); // getting the size of the string
    cout << s[1] << endl;
    s[len -1] = 'm'; // changing the last character of the string
    cout << s[len - 1] << endl; // printing the last character of the string

    return 0;
}