#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int A[MAX][MAX], B[MAX][MAX], S[MAX][MAX];
int R, C;

void sumMatrix(int i, int j) {
    if (i >= R) return;
    if (j >= C) {
        sumMatrix(i + 1, 0);
        return;
    }
    S[i][j] = A[i][j] + B[i][j];
    sumMatrix(i, j + 1);
}

int main() {
    cin >> R >> C;
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j)
            cin >> A[i][j];
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j)
            cin >> B[i][j];

    sumMatrix(0, 0);

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cout << S[i][j];
            if (j < C - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}