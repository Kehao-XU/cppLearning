#include <iostream>
#include <sstream>

int main() {
    std::string initial_quote = "Bjarne Stroustrup C makes it easy to shoot yourself in the foot\n";

    std::stringstream ss(initial_quote);

    //data destinations
    std::string first;
    std::string last;
    std::string language;
    std::string extracted_quote;

    ss >> first >> last >> language;
    std::getline(ss, extracted_quote);

    std::cout << first << " " << last << " said that: " << language << extracted_quote << std::endl;

    return 0;
}