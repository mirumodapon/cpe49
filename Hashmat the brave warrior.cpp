#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::abs;

int main () {

    long long x, y;
    while (cin >> x >> y) {
        
        long long result = abs(x - y);
        
        cout << result << endl;
    }

    return 0;
}
