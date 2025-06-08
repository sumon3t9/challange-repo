#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[1000];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < N; ++j) {
            if (A[j] < A[minIdx]) {
                minIdx = j;
            }
        }
        int temp = A[i];
        A[i] = A[minIdx];
        A[minIdx] = temp;
    }

    for (int i = 0; i < N; ++i) {
        cout << A[i];
        if (i != N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}