#include <iostream>
#include <string>

int main() {
  std::string input;

  while (std::cin >> input) {

    int result = 0;
    for (int i=0; i<input.length(); ++i) {
      result *= 16;

      if (result[i] >= '0' && result[i] <= '9')
        result += result[i] - '0';

      if (result[i] >= 'A' && result[i] <= 'Z')
        result += result[i] - 'A' + 10;

      if (result[i] >= 'a' && result[i] <= 'z')
        result += result[i] - 'a' + 10;
    }
    std::cout << result << std::endl;

  }

  return 0;
}
