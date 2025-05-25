#include<bits/stdc++.h>
using namespace std;
int main() {
    char q;
    cin >> q;
    if (q>= 'a' && q <= 'z') {
        cout << (char)(q-32) << endl;
        } 
        else if (q >= 'A' && q <= 'Z') {
        cout << (char)(q+32) << endl;
    } 
    return 0;
}