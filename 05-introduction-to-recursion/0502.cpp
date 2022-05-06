// 22/05/06 = Fri

// Chapter 5 Introduction to Recursion

// 2. Unlike many programming languages, C++ does not include a predefined
// operator that raises a number to a power.  As a partial remedy for this
// deficiency, write a recursive implementation of a function

// int RaiseIntToPower(int n, int k)

// that calculates n^k.

// RaiseIntToPower(2,0) = 1
// RaiseIntToPower(2,1) = 2
// RaiseIntToPower(2,2) = 4
// RaiseIntToPower(2,3) = 8
// RaiseIntToPower(2,4) = 16
// RaiseIntToPower(2,5) = 32
// RaiseIntToPower(2,6) = 64
// RaiseIntToPower(2,7) = 128
// RaiseIntToPower(2,8) = 256
// RaiseIntToPower(2,9) = 512
// RaiseIntToPower(2,10) = 1024

#include <iostream>

int RaiseIntToPower(int n, int k) {
  if (k <= 0) {
    return 1;
  }
  return n * RaiseIntToPower(n, k - 1);
}

void test() {
  for (int i = 0; i <= 10; ++i) {
    std::cout << "RaiseIntToPower(2," << i << ") = " << RaiseIntToPower(2, i)
              << std::endl;
  }
}

int main() {
  test();
  return 0;
}
