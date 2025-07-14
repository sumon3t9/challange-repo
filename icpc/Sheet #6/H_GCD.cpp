#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b, long long g) {
    return (a / g) * b;
}

int main() {
    long long A, B;
    cin >> A >> B;
    long long G = gcd(A, B);
    long long L = lcm(A, B, G);
    cout << G << " " << L << endl;
    return 0;
}