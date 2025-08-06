#include <bits/stdc++.h>
using namespace std;

long long recursiveSum(const vector<long long>& A, int idx) {
    if (idx == A.size()) return 0;
    return A[idx] + recursiveSum(A, idx + 1);
}

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    cout << recursiveSum(A, 0) << endl;
    return 0;
}