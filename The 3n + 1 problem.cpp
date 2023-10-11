#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

    int x, y;
    while (cin >> x >> y) {
        int max, min;
        if (x > y) {
            max = x;
            min = y;
        } else {
            max = y;
            min = x;
        }

        int answer = 0;
        for (min; min<=max; ++min) {
            int cycle = 1, n = min;

            while (n != 1) {
                if (n % 2 == 0) n /= 2;
                else n = 3 * n + 1;
                ++cycle;
            }

            if (cycle > answer) answer = cycle;
        }

        cout << x << ' ' << y << ' ' << answer << endl;
    }


    return 0;
}
