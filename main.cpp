#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
  [out = std::ref(std::cout << "Hello")]() { out.get() << " World"; }();
  std::cout << std::endl;
  uint_fast64_t n = 1, m = 8, p = 8;
  std::vector<std::vector<std::vector<uint_fast64_t>>> vvv(
      n, std::vector<std::vector<uint_fast64_t>>(
             m, std::vector<uint_fast64_t>(p, 200)));
  for (uint_fast64_t i{}; i < n; i++) {
    for (uint_fast64_t j{}; j < m; j++) {
      for (uint_fast64_t k{}; k < p; k++) {
        std::cout << vvv[i][j][k] << " ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
  return 0;
}
