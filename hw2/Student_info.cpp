#include "Student_info.h"

using namespace std;

//TODO
/**
 * If x has a name which ascends y's name, return true.
 * @param x
 * @param y
 * @return
 */
bool compare(const Student_info &x, const Student_info &y) {
    int i = 0;
    while (x.name[i] && y.name[i] && x.name[i] == y.name[i]) {
        i++;
    }
    if (!x.name[i] || !y.name[i]) {
        return x.name[i] == 0;
    }
    return x.name[i] - y.name[i] < 0;
}

/**
 * Make use of istream to load input into student_info
 * @param is inputStream
 * @param s StudentInformation
 * @return a reference to check its status
 */
std::istream & read(std::istream & is, Student_info &s) {
    is >> s.name >> s.midterm >> s.final;
    if (is) {
        read_hw(is, s.homework);
        if (is.eof()) {
            is.clear();
        }
    }
    return is;
}

std::istream & read_hw(std::istream & in, std::vector<double> & hw) {
    if (in) {
        hw.clear();
        double x;
        while (in >> x) {
            hw.push_back(x);
        }
        if (!in.eof()) {
            in.clear();
        }
    }
    return in;
}
