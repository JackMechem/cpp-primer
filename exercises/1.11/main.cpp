#include <iostream>

/*
 * book does not say to use this but i dont want to type std:: 100 times
 */
using namespace std;

int main() {

  int firstInt = 0, secondInt = 0;

  cout << "Enter First Integer\n";
  cin >> firstInt;

  cout << "Enter Second Integer\n";
  cin >> secondInt;

  cout << "All number in the range are:\n";
  while (firstInt < secondInt - 1) {
    firstInt++;
    cout << firstInt << " ";
  }

  cout << endl;

  return 0;
}
