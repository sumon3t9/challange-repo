#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> divisors;
    for (int i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            divisors.push_back(i);
            if (i != N / i) {
                divisors.push_back(N / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    for (int d : divisors) {
        cout << d << std::endl;
    }
    return 0;
}