#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        double pi;
        cin >> pi;
        sum += pi;
    }
    double result = sum / n;
    cout << fixed << setprecision(12) << result << endl;
    return 0;
}