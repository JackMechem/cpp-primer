/*
 * Rewrite the addition program from eariler and use the multiplication operator
 * to print the product instead.
 */

#include <iostream>

int main() {
  std::cout << "Enter Two Numbers" << std::endl;

  int v2 = 0, v1 = 0;

  std::cin >> v1 >> v2;

  std::cout << "The product of " << v1 << " and " << v2 << " is "
            << v1 * v2 // use the multiplication operator
            << "." << std::endl;
  return 0;
}
