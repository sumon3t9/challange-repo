#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) cin >> A[i];

        int min_sum = INT_MAX;
        int min_Ai_minus_i = A[0] - 0;
        for (int j = 1; j < N; ++j) {
            int current = A[j] + j + min_Ai_minus_i;
            if (current < min_sum) min_sum = current;
            int Ai_minus_i = A[j] - j;
            if (Ai_minus_i < min_Ai_minus_i) min_Ai_minus_i = Ai_minus_i;
        }
        cout << min_sum << endl;
    }
    return 0;
}