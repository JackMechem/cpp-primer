#include <iostream>

int main() {
  int sum = 0;
  int staringValue = 50, endingValue = 100;
  for (int i = staringValue; i <= endingValue; ++i) {
    sum += i;
  }
  std::cout << "The sum of the numbers " << staringValue << " and "
            << endingValue << " is " << sum << std::endl;
  return 0;
}
