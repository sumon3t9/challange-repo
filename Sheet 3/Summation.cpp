#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long x, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        sum += x;
    }

    cout << abs(sum) << '\n';
    return 0;
}

