#include <vector>
#include <stdexcept>
#include "grade.h"
#include "median.h"

using namespace std;

//TODO
double grade(double midterm, double final, double homework) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const std::vector<double> & hw) {
    if (hw.empty()) {
        throw std::domain_error("hw is empty");
    }
    return grade(midterm, final, median(hw));
}