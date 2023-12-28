#include <iostream>
using namespace std;

int main () {
    
    int cases;
    cin >> cases;

    while (cases > 0) {


        int length;
        cin >> length;
        int arr[length];
        for (int i=0;i<length;++i)
            cin >> arr[i];

        // sorting
        for (int i=0;i<length;++i) {
            for (int j=0;j<i;++j) {
                if (arr[i] < arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        int mid;
        if (length % 2 == 0) {
            int pos = length / 2;
            mid = (arr[pos] + arr[pos-1]) / 2;
        } else {
            mid = arr[length / 2];
        }


        // sum
        int sum = 0;
        for (int i=0;i<length;++i) {
            int temp = mid - arr[i];
            if (temp < 0) temp = -temp;
            sum += temp;
        }

        cout << sum << endl;

        --cases;
        // cases = cases - 1;
        // cases -= 1;
    }


    return 0;
}
