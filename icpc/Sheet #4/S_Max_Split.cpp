#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    vector<string> result;
    int countL = 0, countR = 0;
    string temp = "";

    for (char c : S) {
        temp += c;
        if (c == 'L') countL++;
        else if (c == 'R') countR++;
        if (countL == countR) {
            result.push_back(temp);
            temp = "";
            countL = countR = 0;
        }
    }

    cout << result.size() << endl;
    for (const string& s : result) {
        cout << s << endl;
    }
    return 0;
}