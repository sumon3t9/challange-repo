#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
string addBigNumbers(const string& num1, const string& num2) {
    string result;
    int carry = 0;
    int i = num1.size() - 1, j = num2.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0 ? num1[i--] - '0' : 0);
        int digit2 = (j >= 0 ? num2[j--] - '0' : 0);
        int sum = digit1 + digit2 + carry;
        result.push_back((sum % 10) + '0');
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

string multiplyBigNumber(const string& num, int multiplier) {
    string result;
    int carry = 0;
    for (int i = num.size() - 1; i >= 0; --i) {
        int prod = (num[i] - '0') * multiplier + carry;
        result.push_back((prod % 10) + '0');
        carry = prod / 10;
    }
    while (carry) {
        result.push_back((carry % 10) + '0');
        carry /= 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    fast;
    string N;
    cin >> N;
    string addResult = addBigNumbers(N, "9999");
    string mulResult = multiplyBigNumber(N, 9999);
    cout << addResult << "\n" << mulResult << "\n";
    return 0;
}