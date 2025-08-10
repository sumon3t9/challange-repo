#include <bits/stdc++.h>
using namespace std;

long long recursiveSum(const int A[], int n) {
    if (n == 0) return 0;
    return A[n - 1] + recursiveSum(A, n - 1);
}

int main() {
    int N;
    cin >> N;
    int A[100];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    long long sum = recursiveSum(A, N);
    double average = static_cast<double>(sum) / N;
    cout << fixed << setprecision(6) << average << endl;
    return 0;
}