#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(std::cin, S);

    string target = "EGYPT";
    string result;
    size_t i = 0;
    while (i < S.size()) {
        if (S.substr(i, target.size()) == target) {
            result += ' ';
            i += target.size();
        } else {
            result += S[i];
            ++i;
        }
    }

    cout << result << std::endl;
    return 0;
}