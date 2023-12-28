#include <iostream>

int main () {


    int input;
    while (std::cin >> input) {

        std::string output = "";

        while (input > 1) {

            int r = input % 2;
            output += r + '0';
            input /= 2;

        }

        std::cout << '1';
        for (int i=output.length()-1; i>=0; i-=1) {
            std::cout << output[i];
        }

        std::cout << std::endl;

    }

    return 0;
}
