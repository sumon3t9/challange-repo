#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<char>> A(N, vector<char>(M));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> A[i][j];

    int X, Y;
    cin >> X >> Y;
    X--; Y--;
    int dx[] = {-1,-1,-1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1,-1, 1,-1, 0, 1};

    bool all_x = true;
    for (int d = 0; d < 8; ++d) {
        int nx = X + dx[d];
        int ny = Y + dy[d];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
            if (A[nx][ny] != 'x') {
                all_x = false;
                break;
            }
        }
    }

    cout << (all_x ? "yes" : "no") << endl;
    return 0;
}