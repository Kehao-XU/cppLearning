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
