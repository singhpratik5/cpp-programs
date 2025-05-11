#include <iostream>
#include <limits>

int main() {
    std::cout << "Minimum value of int: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Maximum value of int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Minimum value of float: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Maximum value of float: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Precision of float: " << std::numeric_limits<float>::digits << " digits" << std::endl;
    return 0;
}