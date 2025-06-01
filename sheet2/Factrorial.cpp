#include<bits/stdc++.h>

using namespace std;

unsigned long long factorial(int n) {
    unsigned long long res = 1;
    for (int i = 2; i <= n; ++i)
        res *= i;
    return res;
}

int main() {
    int T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        cout << factorial(N) << endl;
    }
    return 0;
}