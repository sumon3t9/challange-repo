#include <bits/stdc++.h>
using namespace std;

int countNonDecreasingSubarrays(const vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    int len = 1;
    for (int i = 1; i < n; ++i) {
        if (arr[i] >= arr[i - 1]) {
            len++;
        } else {
            count += (len * (len + 1)) / 2;
            len = 1;
        }
    }
    count += (len * (len + 1)) / 2;
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << countNonDecreasingSubarrays(A) << endl;
    }
    return 0;
}