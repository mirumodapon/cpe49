#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) return 0;


        int countOfA = sqrt(a);
        int countOfB = sqrt(b);

        if (countOfA * countOfA == a) countOfB++;

        cout << countOfB - countOfA << endl;

    }

    return 0;
}