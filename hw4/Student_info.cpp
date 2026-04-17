#include "Student_info.h"
#include <sstream>

using namespace std;
const string& Student_info::name() const{
    return n;
}

bool compare (const Student_info &x, const Student_info &y) {
    return x.name() < y.name();
}

bool Student_info::valid() const{
    return !homework.empty();
}

std::istream& Student_info::read(std::istream& is) {
    std::string line;
    if (std::getline(is, line)) {
        std::istringstream iss(line);
        iss >> n >> midterm >> final;
        if (iss) {
            homework.clear();
            double x;
            while (iss >> x) {
                homework.push_back(x);
            }
        }
    }
    return is;
}