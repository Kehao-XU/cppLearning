#include <iostream>
#include <string>
#include <vector>
using namespace std;
int strToInt (string s) {
    int result = 0;
    int sign = 1;
    int i = 0;

    while (i < s.length() && s[i] == ' ') i++;

    if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
        result += (int)(s[i] - '0');
        result *= 10;
        i++;
    }
    result /= 10;

    return result * sign;
}

//TODO
int main() {
    string s;
    cin >> s;
    cout << strToInt(s) << endl;
    return 0;
}