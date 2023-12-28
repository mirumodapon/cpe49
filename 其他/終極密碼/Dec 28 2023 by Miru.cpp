#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;


int main () {
  cout << "Welcome to Number Game!" << endl;
  srand(time(NULL));

  cout << "Generating a number between 1 ~ 99...";
  short int ans = rand() % 99 + 1;
  cout << "Done!" << endl;

  short int input = -1;
  short int maxHint = 99;
  short int minHint = 1;
  short int times = 0;
  
  while (true) {
    ++times;

    cout << "The " << times << " time(s)." << endl;
    cout << "Please enter a number between " << minHint << " ~ " << maxHint << ": ";
    cin >> input;

    if (input == ans) break;
    if (input >= maxHint || input <= minHint) {
      cout << "The input number is not in the range." << endl;
      continue;
    }

    if (input > ans) maxHint = input;
    if (input < ans) minHint = input;

  }

  cout << "Current!" << endl << "You use " << times << " time(s) to get the number." << endl;

  return 0;
}