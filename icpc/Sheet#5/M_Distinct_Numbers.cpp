#include <bits/stdc++.h>
using namespace std;

int countDistinctNumbers(int arr[], int n) {
    unordered_set<int> s;
    for (int i = 0; i < n; ++i) {
        s.insert(arr[i]);
    }
    return s.size();
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << countDistinctNumbers(arr, n) << endl;
    return 0;
}