#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
            if (i == j) primarySum += A[i][j];
            if (i + j == N - 1) secondarySum += A[i][j];
        }
    }

    cout << abs(primarySum - secondarySum) << endl;
    return 0;
}