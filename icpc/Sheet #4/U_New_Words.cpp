#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for (char c : S) {
        c = toupper(c);
        if (c == 'E') e++;
        else if (c == 'G') g++;
        else if (c == 'Y') y++;
        else if (c == 'P') p++;
        else if (c == 'T') t++;
    }

    int ans = min({e, g, y, p, t});
    cout << ans << endl;
    return 0;
}