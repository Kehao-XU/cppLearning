#ifndef GUARD_Student_info
#define GUARD_Student_info
// TODO
#include<iostream>
#include<vector>

class Student_info{
	// TODO
private:
	std::string n = "";
	double midterm = 0;
	double final = 0;
	std::vector<double> homework;
public:
	Student_info() = default;
	const std::string& name() const;
	bool valid() const;
	double get_midterm() const { return midterm; }
    double get_final() const { return final; }
    const std::vector<double>& get_homework() const { return homework; }
	std::istream & read(std::istream & is);
};

// TODO
bool compare (const Student_info &x, const Student_info &y);

#endif
