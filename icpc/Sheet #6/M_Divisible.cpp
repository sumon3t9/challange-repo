#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    long long X;
    cin >> N >> X;

    long long remainder = 0;
    for (char c : N) {
        remainder = (remainder * 10 + (c - '0')) % X;
    }

    if (remainder == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}