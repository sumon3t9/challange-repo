#include <bits/stdc++.h>
using namespace std;

void printBinary(unsigned int n) {
    if (n > 1)
        printBinary(n / 2);
    cout << (n % 2);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        unsigned int N;
        cin >> N;
        printBinary(N);
        cout << endl;
    }
    return 0;
}