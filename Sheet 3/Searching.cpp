#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int X;
    cin >> X;

    int pos = -1;
    for (int i = 0; i < N; ++i) {
        if (A[i] == X) {
            pos = i;
            break;
        }
    }
    cout << pos << endl;
    return 0;
}