#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> arr(N, vector<int>(M));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> arr[i][j];
    for (int i = 0; i < N; ++i) {
        for (int j = M - 1; j >= 0; --j) {
            cout << arr[i][j];
            if (j > 0) cout << " ";
        }
        cout << endl;
    }
    return 0;
}