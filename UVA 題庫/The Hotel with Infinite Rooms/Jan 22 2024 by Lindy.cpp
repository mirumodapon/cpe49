#include <iostream>
using namespace std;

int main(){
    long long S, D;
    while (cin >> S >> D) {

        long long sum = S, day = S;
        while (sum<D) {

            day++;
            sum += day;

        }
        cout << day << endl;

    }
    return 0;
}