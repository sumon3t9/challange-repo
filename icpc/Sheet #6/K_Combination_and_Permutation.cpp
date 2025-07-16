#include <bits/stdc++.h>

using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i)
        res *= i;
    return res;
}

int main() {
    fast;
    int A, B;
    cin >> A >> B;

    long long ncr = factorial(A) / (factorial(B) * factorial(A - B));
    long long npr = factorial(A) / factorial(A - B);

    cout << ncr << " " << npr << endl;
    return 0;
}