#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    if (A > B) swap(A, B);

    long long n = B - A + 1;
    long long total_sum = n * (A + B) / 2;
    long long first_even = (A % 2 == 0) ? A : A + 1;
    long long last_even = (B % 2 == 0) ? B : B - 1;
    long long even_count = (last_even >= first_even) ? ((last_even - first_even) / 2 + 1) : 0;
    long long even_sum = even_count * (first_even + last_even) / 2;

    long long first_odd = (A % 2 == 1) ? A : A + 1;
    long long last_odd = (B % 2 == 1) ? B : B - 1;
    long long odd_count = (last_odd >= first_odd) ? ((last_odd - first_odd) / 2 + 1) : 0;
    long long odd_sum = odd_count * (first_odd + last_odd) / 2;

    cout << total_sum << endl;
    cout << even_sum << endl;
    cout << odd_sum << endl;

    return 0;
}