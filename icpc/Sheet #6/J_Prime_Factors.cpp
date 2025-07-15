#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fast;
    long long N;
    cin >> N;
    map<long long, int> factors;

    for (long long i = 2; i * i <= N; ++i) {
        while (N % i == 0) {
            factors[i]++;
            N /= i;
        }
    }
    if (N > 1) {
        factors[N]++;
    }

    bool first = true;
    for (auto it = factors.begin(); it != factors.end(); ++it) {
        if (!first) cout << "*";
        cout << "(" << it->first << "^" << it->second << ")";
        first = false;
    }
    cout << endl;
    return 0;
}