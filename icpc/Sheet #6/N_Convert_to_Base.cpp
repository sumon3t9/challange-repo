#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int charToVal(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    return -1; // invalid
}

char valToChar(int v) {
    if (v >= 0 && v <= 9) return '0' + v;
    if (v >= 10 && v <= 35) return 'A' + (v - 10);
    return '?'; // invalid
}

int main() {
    fast;
    int T;
    cin >> T;
    if (T == 1) {
        string N;
        int X;
        cin >> N >> X;
        long long result = 0;
        for (char c : N) {
            result = result * X + charToVal(c);
        }
        cout << result << endl;
    } else if (T == 2) {
        long long N;
        int X;
        cin >> N >> X;
        string result;
        if (N == 0) result = "0";
        while (N > 0) {
            result += valToChar(N % X);
            N /= X;
        }
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
    return 0;
}