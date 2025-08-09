#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const vector<int>& A, int left, int right) {
    if (left >= right) return true;
    if (A[left] != A[right]) return false;
    return isPalindrome(A, left + 1, right - 1);
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    if (isPalindrome(A, 0, N - 1)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}