// 22/05/06 = Fri

// Chapter 5 Introduction to Recursion

// 1. Spherical objects, such as cannonballs, can be stacked to form a pyramid
// with one cannonball at the top, sitting on top of a square composed of four
// cannonballs, sitting on top of a square composed of nine cannonballs, and so
// forth.  Write a recursive function Cannonball that takes as its argument the
// height of the pyramid and returns the number of cannonballs it contains. Your
// function must operate recursively and must not use any iterative constructs,
// such as while or for.

// Cannonball(1) = 1
// Cannonball(2) = 5
// Cannonball(3) = 14
// Cannonball(4) = 30
// Cannonball(5) = 55
// Cannonball(6) = 91
// Cannonball(7) = 140
// Cannonball(8) = 204
// Cannonball(9) = 285

#include <iostream>

int Cannonball(int height) {
  if (height <= 0) {
    return 0;
  }
  return height * height + Cannonball(height - 1);
}

void test() {
  for (int i = 1; i != 10; ++i) {
    std::cout << "Cannonball(" << i << ") = " << Cannonball(i) << std::endl;
  }
}

int main() {
  test();
  return 0;
}
