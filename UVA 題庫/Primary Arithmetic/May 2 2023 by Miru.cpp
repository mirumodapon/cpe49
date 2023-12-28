#include <iostream>

int main() {


    while (true) {

        int x, y;
        std::cin >> x >> y;
        if ( x == 0 && y == 0) break;

        int count = 0;
        int carry = 0;
        while (x != 0 || y != 0) {

            int i = x % 10;
            int j = y % 10;

            int sum = i + j + carry;
            carry = sum / 10;

            if (carry != 0) ++count;

            x /= 10;
            y /= 10;
        }

        if (count > 1)
            std::cout << count << " carry operations."  << std::endl;
        else if (count == 1)
            std::cout << count << " carry operation."  << std::endl;
        else
            std::cout << "No carry operation."  << std::endl;

    }
    return 0;
}
