#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    string S;
    cin >> A >> B >> S;

    if (S.length() != A + B + 1) {
        cout << "No" << endl;
        return 0;
    }

    bool valid = true;
    for (int i = 0; i < S.length(); ++i) {
        if (i == A) {
            if (S[i] != '-') {
                valid = false;
                break;
            }
        } else {
            if (!isdigit(S[i])) {
                valid = false;
                break;
            }
        }
    }

    cout << (valid ? "Yes" : "No") << endl;
    return 0;
}