#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }

    int count = 1;
    for (int i = 1; i < N; ++i) {
        if (S[i] != S[i - 1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}