#include<bits/stdc++.h>
using namespace std;
int main() {
    float n;
    cin >> n;
    int intp = n;
    float floatp = n - intp;
    if (fabs(floatp) < 1e-6) 
    {
        cout << "int " << intp << "\n";
    } else 
    {
        cout << "float " << intp << " " << fixed << setprecision(3) << floatp << "\n";
    }
    return 0;
}