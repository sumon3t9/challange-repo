#include <bits/stdc++.h>
using namespace std;
int sum_of_digits(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int total = 0;
    for (int i = 1; i <= N; ++i) {
        int digit_sum = sum_of_digits(i);
        if (digit_sum >= A && digit_sum <= B) {
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}