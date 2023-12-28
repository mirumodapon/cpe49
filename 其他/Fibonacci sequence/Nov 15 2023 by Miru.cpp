#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

  int n;

  cout << "Please enter the number n: ";
  cin >> n;

  int lastNumber[] = {0, 1};

  if (n > 0) cout << 0;
  if (n > 1) cout << ", " << 1;

  for (int i=2; i<n; ++i) {
    int currentNumber = lastNumber[0] + lastNumber[1]; 
    cout << ", " << currentNumber;

    lastNumber[i % 2] = currentNumber;
  }

  cout << endl;
  return 0;
}
  

  
