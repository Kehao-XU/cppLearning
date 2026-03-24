#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "Student_info.h"

double grade(double midterm, double final, double homework);
double grade(double midterm, double final, const std::vector<double> & hw);
double average_excluding_extremes(const std::vector<double> & hw);
char level(int grade);
double grade(const Student_info &s);
bool fgrade(const Student_info &s);

#endif
