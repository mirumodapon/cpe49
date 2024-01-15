#include <iostream>
using namespace std;

bool whowin(char x, char y) {
  if (x == y)
    return false;

  if (x == 'R') {
    if (y == 'S')
      return false;
    if (y == 'P')
      return true;
  }
  if (x == 'S') {
    if (y == 'P')
      return false;
    if (y == 'R')
      return true;
  }
  if (x == 'P') {
    if (y == 'R')
      return false;
    if (y == 'S')
      return true;
  }

  return false;
}

int main() {
  int t = 0;
  cin >> t;

  while (t > 0) {
    int r = 0, c = 0, n = 0;
    cin >> r >> c >> n;

    string temp[r], result[r];
    for (int i = 0; i < r; i++) {
      string input;
      cin >> input;

      temp[i] = result[i] = input;
    }

    while (n > 0) {
      for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
          bool islost = false;
          char current = temp[i][j];
          if (i != 0 && whowin(current, temp[i - 1][j]))
            islost = true;
          if (i < r && whowin(current, temp[i + 1][j]))
            islost = true;
          if (j != 0 && whowin(current, temp[i][j - 1]))
            islost = true;
          if (j < c && whowin(current, temp[i][j + 1]))
            islost = true;

          if (islost) {
            if (current == 'R')
              result[i][j] = 'P';
            if (current == 'P')
              result[i][j] = 'S';
            if (current == 'S')
              result[i][j] = 'R';
            else
              result[i][j] = current;
          }
        }
      }

      for (int i = 0; i < r; i++) {
        temp[i] = result[i];
      }

      n--;
    }

    for (int i = 0; i < r; i++) {

      cout << result[i] << endl;
    }

    t--;
  }

  return 0;
}