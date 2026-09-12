#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a > 18) {
        cout << "You are eligible to vote." << endl;
    } else if (a < 18 && a != 18) {
        cout << "You are not eligible to vote." << endl;
    } else {
        cout << "You are 18 years old and eligible to vote." << endl;
    }
    return 0;
}

