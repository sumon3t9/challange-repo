#include <bits/stdc++.h>
using namespace std;

int main() {
    string username;
    cin >> username;
    set<char> distinct_chars(username.begin(), username.end());
    if (distinct_chars.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}