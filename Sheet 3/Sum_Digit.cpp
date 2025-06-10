#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;
    string digits;
    cin >> digits;
    for (char c : digits) {
        sum += c - '0';
    }
    cout << sum << endl;
    return 0;
}