#include <algorithm>
#include <iostream>
#include <ios>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main() 
{ 
	//TODO
	string name;
	cout  << "Please enter your name:";
	cin >> name;
	cout << "Hello, " << name << "!" << '\n';

	double final,midterm;
	cout << "Please enter you midterm and final exam grades:";
	cin >> midterm >> final;

	vector<double> homework;
	double x;
	cout << "Enter all your homework grades, followed by end-of-file:";
	while (cin >> x) {
		homework.push_back(x);
	}
	typedef std::vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "You must enter your grades."
		<< "Please try again." << endl;
		return 1;
	}

	sort(homework.begin(), homework.end());
	vec_sz mid = size / 2;
	double median = size % 2 == 0 ? (homework[mid - 1] + homework[mid]) / 2 : homework[mid];

	double ultimate = final * 0.4 + midterm * 0.2 + median * 0.4;
	cout << "Your final grade is " << ultimate << endl;
	cout << "Press any key to continue";

	return 0; 
} 
