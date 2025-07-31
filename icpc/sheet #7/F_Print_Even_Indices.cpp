#include <bits/stdc++.h>
using namespace std;

void printEvenIndicesReverse(const vector<int>& A, int idx) {
    if (idx < 0) return;
    if (idx % 2 == 0) {
        cout << A[idx] << " ";
    }
    printEvenIndicesReverse(A, idx - 1);
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    printEvenIndicesReverse(A, N - 1);
    return 0;
}