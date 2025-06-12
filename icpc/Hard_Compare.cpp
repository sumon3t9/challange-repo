#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long double left = B * logl(A);
    long double right = D * logl(C);

    if (left > right)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}