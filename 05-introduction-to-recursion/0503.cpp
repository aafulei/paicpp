// 22/05/06 = Fri

// Chapter 5 Introduction to Recursion

// 3. The greatest common divisor (g.c.d.) of two nonnegative integers is the
// largest integer that divides evenly into both. In the third century B.C., the
// Greek mathematician Euclid discovered that the greatest common divisor of x
// and y can always be computed as follows:

// - If x is evenly divisible by y, then y is the greatest common divisor.
// - Otherwise, the greatest common divisor of x and y is always equal to the
//   greatest common divisor of y and the remainder of x divided by y.

// Use Euclid's insight to write a recursive function GCD(x, y) that computes
// the greatest common divisor of x and y.

// GCD(2,3) = 1
// GCD(36,24) = 12
// GCD(21,35) = 7
// GCD(88,64) = 8

#include <array>
#include <iostream>
#include <vector>

int GCD(int x, int y) {
  int r = x % y;
  if (r == 0) {
    return y;
  }
  return GCD(y, r);
}

void test() {
  std::vector<std::array<int, 2>> vec{{2, 3}, {36, 24}, {21, 35}, {88, 64}};
  for (const std::array<int, 2> &arr : vec) {
    auto [x, y] = arr;
    std::cout << "GCD(" << x << "," << y << ") = " << GCD(x, y) << std::endl;
  }
}

int main() {
  test();
  return 0;
}
