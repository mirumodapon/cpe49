#include <iostream>
#include <cmath>

int main() {

    int a, b, c;
    std::cin >> a >> b >> c;

    double d = b * b - 4 * a * c;

    if (d < 0) {
        std::cout << "No root!" << std::endl;
        return 0;
    }

    if (d == 0) {
        std::cout << "Two same root: " << -b / (2 * a) << std::endl;
        return 0;
    }

    // d > 0
    std::cout << "The first root: " << (-b + sqrt(d)) / 2 / a << std::endl;
    std::cout << "The second root: " << (-b - sqrt(d)) / 2 / a << std::endl;

    return 0;
}
