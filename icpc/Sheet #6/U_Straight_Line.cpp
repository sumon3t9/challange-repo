#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;


    long long area = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    if (area == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}