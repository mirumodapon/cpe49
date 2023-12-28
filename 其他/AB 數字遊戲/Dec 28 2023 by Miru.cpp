#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
  cout << "Welcome to AB Number Game!" << endl;
  srand(time(NULL));

  cout << "Generating a 4 digits number ...";
  string ans = "0123456789";

  for (int i=0; i<4; ++i) {
    int position = rand() % (ans.length() - i) + i;
    char temp = ans[position];
    ans[position] = ans[i];
    ans[i] = temp;
  }

  ans = ans.substr(0, 4);
  cout << "Done!" << endl;

  string input;
  while (true) {
    cout << "Enter a number: ";
    cin >> input;

    if (input == ans) break;


    int a = 0, b = 0;

    for (int i=0; i<4; ++i) {
      if (ans[i] == input[i]) {
        ++a;
        continue;
      }

      if (ans.find(input[i]) != string::npos) {
        ++b;
        continue;
      }

    }

    cout << "Hint: " << a << " A " << b << " B" << endl;
  }

  cout << "Current!" << endl;


  
  return 0;
}