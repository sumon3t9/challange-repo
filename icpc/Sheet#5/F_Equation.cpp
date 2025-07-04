#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

 long long equation(int X, int N )

 {
    long long Sum = 0;
    for (int i = 2; i <= N; i += 2) {
        Sum += pow(X, i);
    
    }
    return Sum;
}

int main() {
    fast;
    
    int X, N;
    cin >> X >> N;
    long long Sum = equation (X, N);
    cout << Sum << endl;
    return 0;
}