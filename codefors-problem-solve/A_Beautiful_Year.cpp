#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int year) {
    set<int> digits;
    while (year) {
        int d = year % 10;
        if (digits.count(d)) return false;
        digits.insert(d);
        year /= 10;
    }
    return true;
}

int main() {
    int y;
    cin >> y;
    for (int next = y + 1; next <= 9999; ++next) {
        if (hasDistinctDigits(next)) {
            cout << next << endl;
            break;
        }
    }
    return 0;
}