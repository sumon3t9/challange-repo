#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, target = "hello";
    cin >> S;
    int j = 0;
    for (char c : S) {
        if (c == target[j]) {
            j++;
            if (j == target.size()) break;
        }
    }
    if (j == target.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}