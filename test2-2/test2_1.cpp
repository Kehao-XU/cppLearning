#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<string> split(const std::string & s) {
	std::vector<string> split_words;
	string x;
	x.clear();
	size_t i = 0;
	for (; i < s.size(); i++) {
		if (s.at(i) == ' ') {
			if (!x.empty()) {
				split_words.push_back(x);
				x.clear();
			}
		} else {
			x += s.at(i);
		}
	}
	if (!x.empty()) {
		split_words.push_back(x);
	}
	return split_words;
}

int main() 
{ 
	//TODO
	string s;
	getline(cin, s);
	vector<string> split_words = split(s);

	for (string word : split_words) {
		cout << "\"" << word << "\"" << '\n';
	}
	return 0; 
}
