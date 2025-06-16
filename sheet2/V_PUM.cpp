#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, cnt = 1;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << cnt++ << " ";
        }
        cout << "PUM" << endl;
        cnt++;
    }
    return 0;
}