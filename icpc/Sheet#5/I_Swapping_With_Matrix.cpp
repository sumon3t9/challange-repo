#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void swapRows(vector<vector<int>>& mat, int x, int y) {
    swap(mat[x], mat[y]);
}

void swapCols(vector<vector<int>>& mat, int x, int y) {
    int n = mat.size();
    for (int i = 0; i < n; ++i) {
        swap(mat[i][x], mat[i][y]);
    }
}

int main() {
    fast;
    int N, X, Y;
    cin >> N >> X >> Y;
    X--; Y--;

    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> A[i][j];

    swapRows(A, X, Y);
    swapCols(A, X, Y);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << A[i][j] << (j == N - 1 ? '\n' : ' ');
        }
    }
    return 0;
}