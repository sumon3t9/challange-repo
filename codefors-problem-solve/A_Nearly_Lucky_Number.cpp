#include <bits/stdc++.h>
using namespace std;

bool isLucky(int x) {
    if (x == 0) return false;
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    int luckyCount = 0;
    for (char c : n) {
        if (c == '4' || c == '7') luckyCount++;
    }
    if (isLucky(luckyCount))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}