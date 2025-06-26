#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    sort(A.begin(), A.end());
    while (Q--) {
        int X;
        cin >> X;
        if (binary_search(A.begin(), A.end(), X)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }
    return 0;
}