#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <algorithm>
#include <fstream>
#include <list>
#include "grade.h"
#include "Student_info.h"
using namespace std;


int main(int argc, char * argv[]) 
{ 
	//TODO
	std::istream* in_ptr = &std::cin;
	std::ifstream ifs;
	if (argc == 2) {
		ifs.open(argv[1]);
		if (!ifs.is_open()) {
			cerr << "Error: cannot open file" << argv[1] << '\n' ;
			return 1;
		} else {
			in_ptr = &ifs;
		}
	}
	list<Student_info> students;
	Student_info s;

	while (s.read(*in_ptr)) {
		students.push_back(s);
	}
	if (students.empty()) {
		cout << "No student found" << '\n';
		return 1;
	}

	students.sort(compare);
	for (const auto& s : students) {
		cout << s.name() << "'s final grade is " << setprecision(3)
		<< grade(s.get_midterm(), s.get_final(), s.get_homework())
		<< '\n';
	}
	return 0; 
}
