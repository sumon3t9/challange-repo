#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        vector<int> result;
        for (int i = 0; i < N; ++i) {
            int mx = A[i];
            for (int j = i; j < N; ++j) {
                mx = max(mx, A[j]);
                result.push_back(mx);
            }
        }
        for (size_t i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i + 1 < result.size()) cout << " ";
        }
        cout << endl;
    }
    return 0;
}