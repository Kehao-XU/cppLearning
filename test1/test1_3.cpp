#include <iostream>
#include <string>
#include <vector>
using namespace std;

int strToInt(const string s, int k) {
	int result = 0;
	int sign = 0;
	int i = 0;

	while (i < s.length() && s[i] == ' ') i++;

	if (i < s.length() && s[i++] == '-') sign = -1;

	while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
		result += (int)(s[i] - '0');
		result *= k;
		i++;
	}
	result /= k;

	return result * sign;
}

int main() 
{ 
	//TODO
	string s;
	int k;
	cin >> s >> k;
	cout << strToInt(s, k) << endl;
	return 0; 
}
