#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    bool isPalindrome = true;
    for (int i = 0; i < N / 2; ++i) {
        if (A[i] != A[N - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    cout << (isPalindrome ? "YES" : "NO") << endl;
    return 0;
}