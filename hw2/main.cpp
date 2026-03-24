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

list<Student_info> extract_fails(list<Student_info> & students)
{
	//TODO
	if (students.empty()) {
		throw runtime_error("Student list is empty");
	}
	list<Student_info> failed_students;
	auto it = students.begin();
	while (it != students.end()) {
		if (fgrade(*it)) {
			auto cur = it++;
			failed_students.splice(failed_students.end(), students, cur);
		} else {
			++it;
		}
	}

	failed_students.sort(compare);
	return failed_students;
}


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

	/*while (true) {
		if (!read(*in_ptr, s)) break;
		students.push_back(s);
		if ((*in_ptr).eof()) break;
	}*/
	while (read(*in_ptr, s)) {
		students.push_back(s);
		if (in_ptr->eof()) break;
	}
	if (students.empty()) {
		cout << "No student found" << '\n';
		return 1;
	}

	/*
	try {
		list<Student_info> failed_students = extract_fails(students);
		for (Student_info fs : failed_students) {
			cout << left << setw(10) << fs.name << "Your final grade is " << grade(fs) << '\n';
		}
	} catch (runtime_error & e) {
		cerr << e.what() << '\n';
	} catch (domain_error & e) {
		cerr << e.what() << '\n';
	}
	*/

	try {
		cout << left << setw(10) << "Name"
			<< left << setw(6) << "Grade"
			<< left << setw(6) << "Level" << '\n';
		for (Student_info s : students) {
			cout << left << setw(10) << s.name
			<< left << setw(6) << grade(s)
			<< left << setw(6) << level(grade(s)) << '\n';
		}
	} catch (runtime_error & e) {
		cerr << e.what() << '\n';
	} catch (domain_error & e) {
		cerr << e.what() << '\n';
	}

	return 0; 
}
