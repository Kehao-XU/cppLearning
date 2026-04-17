#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec{1, 2, 3, 4};
    vec.push_back(5);
    vec.push_back(6);
    vec.at(1) = 20;

    for (const int i : vec) {
        std::cout << i << ' ';
    }
    return 0;
}