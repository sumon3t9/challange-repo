#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    stringstream ss(S);
    string word;
    bool first = true;
    while (ss >> word) {
        reverse(word.begin(), word.end());
        if (!first) cout << " ";
        cout << word;
        first = false;
    }
    cout << endl;
    return 0;
}