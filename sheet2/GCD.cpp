#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << gcd(A, B) << endl;
    return 0;
}