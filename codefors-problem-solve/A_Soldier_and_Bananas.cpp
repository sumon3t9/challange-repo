#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    fast;
    int k, n, w;
    cin >> k >> n >> w;

    int total_cost = k * w * (w + 1) / 2;
    int borrow = total_cost - n;
    if (borrow < 0) borrow = 0;
    cout << borrow << endl;
    return 0;
}