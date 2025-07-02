#include <bits/stdc++.h>
using namespace std;

void printNumbers(int N) {
    for (int i = 1; i <= N; ++i) {
        cout << i;
        if (i != N) cout << " ";
    }
}

int main() {
    int N;
    cin >> N;
    printNumbers(N);
    return 0;
}