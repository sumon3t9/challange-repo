#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countVowels(const string& s, int idx = 0) {
    if (idx == s.size()) return 0;
    return isVowel(s[idx]) + countVowels(s, idx + 1);
}

int main() {
    string S;
    getline(cin, S);
    cout << countVowels(S) << endl;
    return 0;
}