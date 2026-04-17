#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string>
using namespace std;


struct Student {
    std::string name;
    int score;
};

/*
*1）给定一个整数向量 std::vector<int> numbers = {3, 5, 2, 8, 1, 10};，使用Lambda实现：

(a) 用 std::transform 将所有元素乘以2，生成新向量 doubled。
(b) 用 std::copy_if 过滤出大于5的数，存入新向量 filtered。
(c) 用 std::sort 按绝对值与5的差值升序排序（如|3-5|=2）。
*/
void task1() {
    // TODO
    vector<int> numbers = {3, 5, 2, 8, 1, 10};
    vector<int> doubled_vec;
    transform(numbers.begin(), numbers.end(), back_inserter(doubled_vec),
        [](int x){return 2*x;});
    cout << "Doubled vector: ";
    for (int i : doubled_vec) {
        cout << i << ' ';
    }
    cout << '\n';

    vector<int> filtered_vec;
    copy_if(numbers.begin(), numbers.end(),back_inserter(filtered_vec),
        [](int x) {return x > 5;});
    cout << "Filtered vector (> 5): ";
    for (int i : filtered_vec) {
        cout << i << ' ';
    }
    cout << '\n';

    sort(numbers.begin(), numbers.end(),
        [](int x, int y) {
            return abs(x - 5) < abs(y - 5);
        });
    cout << "Sorted by absolute difference from 5: ";
    for (int i : numbers) {
        cout << i << ' ';
    }
    cout << '\n';
}

/*
*2）给定学生结构体向量：

struct Student {
std::string name;
int score;
};
std::vector<Student> students = {{"Alice", 85}, {"Bob", 72}, {"Charlie", 90}};

(a) 用 std::sort 按分数降序排序。
(b) 用 std::for_each 打印分数大于80的学生名字。
*/
void task2() {
    // TODO
    std::vector<Student> students = {{"Alice", 85}, {"Bob", 72}, {"Charlie", 90}};
    cout << "Students sorted by score (descending):" << '\n';

    std::sort(students.begin(), students.end(),
        [](Student x, Student y) {
            return x.score > y.score;
        });

    std::for_each(students.begin(), students.end(),
        [](Student x) {
            cout << x.name << ": " << x.score << '\n';
        });
    cout << '\n' << "Students with score > 80:" << '\n';

    std::for_each(students.begin(), students.end(),
        [](Student x) {
            if (x.score > 80) cout << x.name << '\n';
        });
}

/*
*3） 给定一个整数向量 std::vector<int> numbers = {3, 5, 2, 8, 1, 10};，使用Lambda实现：
用 std::accumulate 和Lambda计算所有偶数的乘积（如 {1, 2, 3, 4} → 2×4=8）。
*/
void task3() {
    // TODO
    std::vector<int> numbers = {3, 5, 2, 8, 1, 10};
    int product = std::accumulate(numbers.begin(), numbers.end(), 1,
        [](int acc, int x) {
            return (x % 2 == 0) ? acc * x : acc;
        });
    cout << "Product of even numbers: " << product << '\n';
}

int main() {
    cout << "Task 1 Solution:" << std::endl;
    task1();

    cout << "\nTask 2 Solution:" << std::endl;
    task2();

    cout << "\nTask 3 Solution:" << std::endl;
    task3();

    return 0;
}