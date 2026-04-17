#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<string> frame(const std::vector<string> & v) {
	size_t MAX_SIZE = 0;
	for (string s : v) {
		if (s.size() > MAX_SIZE) {
			MAX_SIZE = s.size();
		}
	}

	string border;
	for (size_t i = 0; i < MAX_SIZE + 4; i++) {
		border += '*';
	}

	vector<string> framed_string;
	framed_string.push_back(border);
	for (string s : v) {
		string line;
		line += "* ";
		for (size_t i = 0; i < MAX_SIZE; i++) {
			line += ' ';
		}
		line += " *";
		line.replace(2, s.size(), s);
		framed_string.push_back(line);
		line.clear();
	}
	framed_string.push_back(border);

	return framed_string;
}

int main() 
{ 
	//TODO
	vector<string> v;
	string x;
	while (getline(cin, x)) {
		v.push_back(x);
	}

	vector<string> framed_lines = frame(v);
	for (string l : framed_lines) {
		cout << l << '\n';
	}
    
	return 0; 
}
