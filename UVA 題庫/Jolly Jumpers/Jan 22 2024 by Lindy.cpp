#include <iostream>
using namespace std;


int main() {

    int length;
    while (cin >> length) {
        int arr[length];
        for (int i=0; i<length; ++i) cin >> arr[i];

        int limit = length - 1;
        int gaps[length - 1];
        bool isJolly = true;
        for (int i=0; i<length-1; ++i) {

            int foo = arr[i] - arr[i + 1];
            foo = foo > 0 ? foo : -foo;
            gaps[i] = foo;


            if (foo > limit) {
                isJolly = false;
                break;
            }

            for (int j=0; j<i;++j) {
                if (gaps[j] == foo) {
                    isJolly = false;
                    break;
                }
            }

        }

        cout << (isJolly ? "Jolly" : "Not jolly") << endl;


    }

    return 0;
}