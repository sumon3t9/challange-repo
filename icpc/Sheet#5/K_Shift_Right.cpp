#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


void rightShift(vector<int>& A, int X) {
    int N = A.size();
    X = X % N; 
    if (X == 0) return;
    vector<int> temp(N);
    for (int i = 0; i < N; ++i) {
        temp[(i + X) % N] = A[i];
    }
    A = temp;
}

int main() {
    fast;
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    rightShift(A, X);
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}