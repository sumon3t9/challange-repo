#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int maxNum = 0;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        if (i == 0 || x > maxNum) {
            maxNum = x;
        }
    }
    cout << maxNum << endl;
    return 0;
}