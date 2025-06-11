#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;

    int first_digit = X / 1000;

    if (first_digit % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}