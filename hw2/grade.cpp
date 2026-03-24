#include <vector>
#include <stdexcept>
#include "grade.h"

#include <algorithm>

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
    return grade(midterm, final, average_excluding_extremes(hw));
}

double average_excluding_extremes(const std::vector<double> & hw) {
    if (hw.size() < 3) {
        return average(hw);
    }

    std::vector<double> sorted_hw = hw;
    std::sort(sorted_hw.begin(), sorted_hw.end());
    auto it = sorted_hw.begin();
    double sum = 0;
    int count = 0;
    while (++it != sorted_hw.end() - 1) {
        sum += *it;
        count++;
    }
    return sum / count;
}

char level(int grade) {
    if (grade >= 90) {
        return 'A';
    } else if (grade >= 80) {
        return 'B';
    } else if (grade >= 70) {
        return 'C';
    } else if (grade >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

double grade(const Student_info &s) {
    return grade(s.midterm, s.final, s.homework);
}

bool fgrade(const Student_info &s) {
    return grade(s) < 60;
}
