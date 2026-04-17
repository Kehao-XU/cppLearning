#include <iostream>
#include <string>
#include <vector>
using namespace std;

//TODO
double anti_Poland(std::istream & in) {
    vector<string> numbers;
    string x;
    while (in >> x) {
        if (x == "+") {
            double a = stod(numbers.back());
            numbers.pop_back();
            double b = stod(numbers.back());
            numbers.pop_back();
            double c = a + b;
            numbers.push_back(to_string(c));
        } else if (x == "-") {
            double a = stod(numbers.back());
            numbers.pop_back();
            double b = stod(numbers.back());
            numbers.pop_back();
            double c = a - b;
            numbers.push_back(to_string(c));
        } else if (x == "*") {
            double a = stod(numbers.back());
            numbers.pop_back();
            double b = stod(numbers.back());
            numbers.pop_back();
            double c = a * b;
            numbers.push_back(to_string(c));
        } else if (x == "/") {
            double a = stod(numbers.back());
            numbers.pop_back();
            double b = stod(numbers.back());
            numbers.pop_back();
            double c = a / b;
            numbers.push_back(to_string(c));
        } else {
            numbers.push_back(x);
        }
    }
    return stod(numbers.back());
}

int main() {
    double calcTest = anti_Poland(cin);
    cout << calcTest << '\n';
    return 0;
}