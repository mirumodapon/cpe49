#include <iostream>

int cycle_counter(int n) {

    int count = 1;

    while (n != 1) {
        if (n % 2 == 1) n = 3*n+1;
        else n = n/2;

        ++count;

    }

    return count;
}

int main() {


    int x, y;
    int from, to;
    while (std::cin >> x >> y) {
        if (x > y) {
            from = y;
            to = x;
        } else {
            from = x;
            to = y;
        }

        int max = 0;

        for (int i=from;i<=to;++i) {
            int count = cycle_counter(i);
            if (count > max) max = count;
        }

        std::cout << x << ' ' << y << ' ' << max << std::endl;


    }

    return 0;
}
