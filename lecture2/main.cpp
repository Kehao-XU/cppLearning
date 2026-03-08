#include <iostream>
#include <utility>
#include <cmath>

using std::string;
using std::cout;
using std::endl;

struct StanfordID {
    string name;
    string sunet;
    int idNumber;
};

using Zeros = std::pair<double, double>;
using Solution = std::pair<bool,Zeros>;
Solution solveQuadratic(double a, double b, double c) {
    Solution solution;
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        solution.first = false;
        return solution;
    } else {
        solution.first = true;
        solution.second = {(- b + pow(delta, 0.5)) / 2 * a, (- b - pow(delta, 0.5)) / 2 * a};
        return solution;
    }
}

void printSolution(Solution solution) {
    if (solution.first == false) {
        cout << "There aint any solution" << endl;
    } else {
        cout << "Solution: " << solution.second.first << " " << solution.second.second << endl;
    }
}

int main() {
    /*StanfordID tree {"THE Stanford Tree", "theTREE", 0000002};
    cout << tree.name << endl;

    std::pair<double,double> point {1.2, 2.0};
    cout << point.first <<endl;*/

    auto result = solveQuadratic(1.5, 3.4, -7.0);
    printSolution(result);
    return 0;
}
