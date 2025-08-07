#include <bits/stdc++.h>
using namespace std;

long long suffixSum(const vector<long long>& A, int idx, int M) {
    if (M == 0) return 0;
    return A[idx] + suffixSum(A, idx + 1, M - 1);
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    cout << suffixSum(A, N - M, M) << endl;
    return 0;
}