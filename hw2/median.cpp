#include <vector>
#include <algorithm>
using namespace std;

//TODO
double median(std::vector<double> vec) {
    sort(vec.begin(), vec.end());
    typedef std::vector<double>::size_type vec_sz;
    const vec_sz size = vec.size();
    return size % 2 == 0 ? (vec[size / 2] + vec[size / 2 - 1]) / 2 : vec[size / 2];
}

double average(const std::vector<double> &vec) {
    double sum = 0;
    for (double i : vec) {
        sum += i;
    }
    return sum / vec.size();
}