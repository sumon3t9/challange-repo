#include <bits/stdc++.h>
using namespace std;

int main() {
    double R, S;
    cin >> R >> S;
    double half_diag = S * sqrt(2) / 2;
    double half_side = S / 2.0;

    if (half_diag <= R + 1e-9) {
        cout << "Circle" << endl;
    } else if (R <= half_side + 1e-9) {
        cout << "Square" << endl;
    } else {
        cout << "Complex" << endl;
    }
    return 0;
}