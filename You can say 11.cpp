#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {

    string input;
    while (cin >> input) {
        if (input == "0") break;

        int temp = 0;
        for (char c : input)
            temp = (int)c - (int)'0' - temp;

        if (temp % 11)
            cout << input << " is not a multiple of 11." << endl;
        else
            cout << input << " is a multiple of 11." << endl;

    }


    return 0;
}
