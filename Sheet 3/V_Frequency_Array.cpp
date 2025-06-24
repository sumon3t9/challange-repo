#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> feq(M+1, 0);
    for(int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        if (x <= M) {
            feq[x]++;
        }
    }
    for(int i = 1; i <= M; ++i) {
        cout << feq[i] << endl;
    }
    return 0;
}
