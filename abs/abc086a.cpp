#include <iostream>
int main() {
  int a, b;
  std::cin >> a >> b;

  int prod;
  prod = a * b;

  if (prod % 2 == 0) {
    std::cout << "Even";
  } else {
    std::cout << "Odd";
  }

  return 0;
}
