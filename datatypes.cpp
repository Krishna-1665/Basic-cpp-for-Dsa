#include<iostream>
using namespace std;

int main() {
    // int
    int a = 10;
    // long 
    long b = 15;
    cin >> b;
    // long long
    long long c = 20;

    // float
    float d = 10.5;
    // double
    double e = 20.5;

    // string = it only picks up the first word of the string after a space it will be another string
    string str = "Hello, World!";
    // getline = it will pick up the whole string 
    getline(cin, str);
    
    // char
    char f = 'A';
    
    return 0;
}
