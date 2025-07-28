#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

int countDivision(int x) {
  int count = 0;
  while (x % 2 == 0) {
    x /= 2;
    ++count;
  }

  return count;
}

int main() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }

  int min_ops = 1e9;
  for (int i = 0; i < n; ++i) {
    min_ops = std::min(min_ops, countDivision(a[i]));
  }

  std::cout << min_ops << std::endl;

  return 0;
}
