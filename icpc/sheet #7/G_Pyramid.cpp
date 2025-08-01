#include <bits/stdc++.h>
using namespace std;

void printSpaces(int count) {
    if (count == 0) return;
    cout << ' ';
    printSpaces(count - 1);
}

void printStars(int count) {
    if (count == 0) return;
    cout << '*';
    printStars(count - 1);
}

void printPyramid(int n, int current = 1) {
    if (current > n) return;
    printSpaces(n - current);
    printStars(2 * current - 1);
    cout << '\n';
    printPyramid(n, current + 1);
}

int main() {
    int N;
    cin >> N;
    printPyramid(N);
    return 0;
}