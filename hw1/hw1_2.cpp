#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{ 
	//TODO
	vector<string> names;
	string name;
	while (cin >> name) {
		names.push_back(name);
	}
	auto size = names.size();
	if (size == 0) {
		cout << "Please input names" << endl;
		return 1;
	}

	vector<int> longest, shortest;
	longest.push_back(0);
	shortest.push_back(0);
	for (int i = 1; i < size; i++) {
		if (names[i].size() > names[longest[0]].size()) {
			longest.clear();
			longest.push_back(i);
		}
		else if (names[i].size() == names[longest[0]].size()) {
			longest.push_back(i);
		}

		else if (names[i].size() < names[shortest[0]].size()) {
			shortest.clear();
			shortest.push_back(i);
		}
		else if (names[i].size() == names[shortest[0]].size()) {
			shortest.push_back(i);
		}
	}

	cout << "longest: ";
	for (int i : longest) {
		cout << names[i];
	}
	cout << endl;
	cout << "shortest: ";
	for (int i : shortest) {
		cout << names[i] << " ";
	}
	cout << endl;
	return 0; 
}
