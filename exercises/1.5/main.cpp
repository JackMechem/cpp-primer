/*
 * Rewrite the multiplication program to use a seperate statement to priunt each
 * operand.
 */

#include <iostream>

int main() {
  std::cout << "Enter Two Numbers";
  std::cout << std::endl;

  int v2 = 0, v1 = 0;

  std::cin >> v1 >> v2;

  std::cout << "The product of ";
  std::cout << v1;
  std::cout << " and ";
  std::cout << v2;
  std::cout << " is ";
  std::cout << v1 * v2; // use the multiplication operator
  std::cout << ".";
  std::cout << std::endl;
  return 0;
}
