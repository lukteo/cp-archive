#include <algorithm>
#include <cstddef>
#include <functional>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

int main() {
  size_t n;
  std::cin >> n;

  std::vector<int> a(n);
  for (size_t i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  // sort array of cards from larges t to smallest
  std::sort(a.begin(), a.end(), std::greater<int>());

  // alice goes first
  // cards are taken in alternate manner
  // largest number goes first
  // alice - bob score, keep single coutn is enough

  int count = 0;

  for (size_t i = 0; i < n; i++) {
    if (i % 2 == 0) {
      count += a[i];
    } else {
      count -= a[i];
    }
  }

  std::cout << count << std::endl;

  return 0;
}
