#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {

  long long int x, y;

  while (cin >> x) {
    cin >> y;

    long long int ans = x - y;
    if (ans < 0) ans = -ans;

    cout << ans << endl;
  }

  return 0;
}