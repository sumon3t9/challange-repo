#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    string revN = N;
    reverse(revN.begin(), revN.end());
    revN.erase(0, revN.find_first_not_of('0'));

    if (revN.empty()) revN = "0";

    cout << revN << endl;

    if (N == string(N.rbegin(), N.rend()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}