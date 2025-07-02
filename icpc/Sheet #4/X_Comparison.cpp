#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.size();

    if (n == 1) {
        cout << S << endl;
        return 0;
    }

    std::string result = S;
    for (int i = 1; i < n; ++i) {
        string X = S.substr(0, i);
        string Y = S.substr(i);
        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());
        string candidate = X + Y;
        if (candidate < result) {
            result = candidate;
        }
    }
    cout << result << endl;
    return 0;
}