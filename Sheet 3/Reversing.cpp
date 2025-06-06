#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[1003];

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = N - 1; i >= 0; --i) {
        cout << A[i];
        if (i > 0) cout << " ";
    }
    cout << endl;

    return 0;
}