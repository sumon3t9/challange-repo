#include <bits/stdc++.h>
using namespace std;

int findMax(const vector<int>& A, int idx, int n) {
    if (idx == n - 1)
        return A[idx];
    int maxRest = findMax(A, idx + 1, n);
    return (A[idx] > maxRest) ? A[idx] : maxRest;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    cout << findMax(A, 0, N) << endl;
    return 0;
}