#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fast;
    long long L, R, M;
    cin >> L >> R >> M;
    long long result = 1;
    for (long long i = L; i <= R; ++i) {
        result = (result * i) % M;
    }
    cout << result << endl;
    return 0;
}