#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (A[i] > 0)
            A[i] = 1;
        else if (A[i] < 0)
            A[i] = 2;
    }
    for (int i = 0; i < N; ++i) {
        cout << A[i];
        if (i != N - 1) cout << " ";
    }
    cout << endl;
    return 0;
}