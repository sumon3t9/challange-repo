#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        unsigned int N;
        cin >> N;
        int ones = 0;
        unsigned int temp = N;
        while (temp) {
            ones += temp & 1;
            temp >>= 1;
        }
        cout << ((1 << ones) - 1) << endl;
    }
    return 0;
}