#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int minValue = A[0];
    int minPos = 1;
    for (int i = 1; i < N; ++i) {
        if (A[i] < minValue) {
            minValue = A[i];
            minPos = i + 1;
        }
    }

    cout << minValue << " " << minPos << endl;
    return 0;
}