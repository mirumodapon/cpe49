#include <iostream>
#include <string>
using namespace std;

int main () {
    
    string number;
    while (cin >> number) {
        if (number == "0") break;
        
        int target = 0;
        for (int i=0;i<number.length();++i) {
            if (i % 2 == 0) target += number[i] - '0';
            else target -= number[i] - '0';
        }

        if (target % 11 == 0) cout << number << " is a multiple of 11." << endl;
        else cout << number << " is not a multiple of 11." << endl;

    }

    return 0;
}
