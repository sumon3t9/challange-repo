#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.length();
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; ++i) {
        if (S[i] != S[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}