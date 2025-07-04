#include <bits/stdc++.h>
using namespace std;

void printMinMax(const vector<int>& arr) {
    int mn = arr[0], mx = arr[0];
    for (int x : arr) {
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }
    cout << mn << " " << mx << endl;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    printMinMax(A);
    return 0;
}