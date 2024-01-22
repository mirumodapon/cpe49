#include <iostream>
using namespace std;

int main() {

    int T = 0;
    cin >> T;


    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (T--) {
        int M, D;
        cin >> M >> D;

        int day = D;
        for (int i=1; i<M; ++i) {
            day += days[i];
        }

        day %= 7;
        string dayName[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        cout << dayName[day] << endl;
    }

    return 0 ;
}