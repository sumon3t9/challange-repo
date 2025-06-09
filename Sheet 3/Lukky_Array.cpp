#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int min_elem = *min_element(A.begin(), A.end());
    int freq = count(A.begin(), A.end(), min_elem);

    if (freq % 2 == 1)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;

    return 0;
}