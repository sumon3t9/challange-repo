#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void shiftZerosRight(vector<int>& A) {
    int n = A.size();
    int idx = 0; 

    for (int i = 0; i < n; ++i) {
        if (A[i] != 0) {
            A[idx++] = A[i];
        }
    }
    while (idx < n) {
        A[idx++] = 0;
    }
}

int main() {
    fast;
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    shiftZerosRight(A);

    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}