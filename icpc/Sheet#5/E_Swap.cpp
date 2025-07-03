#include <bits/stdc++.h>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int X, Y;
    cin >> X >> Y;
    swapNumbers(X, Y);
    cout << X << " " << Y << endl;
    return 0;
}