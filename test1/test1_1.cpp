#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> sentence_reverse(vector<string> sentence) {
	vector<string> reversed_sentence;
	for (auto it = sentence.end() - 1; it >= sentence.begin(); --it) {
		reversed_sentence.push_back(*it);
	}
	return reversed_sentence;
}

int main() 
{ 
	//TODO
	vector<string> sentence;
	string x;
	while (cin >> x) {
		sentence.push_back(x);
	}
	vector<string> reversed_sentence = sentence_reverse((sentence));
	for (auto it = reversed_sentence.begin(); it != reversed_sentence.end(); ++it) {
		cout << *it << " ";
	}

	return 0; 
}
