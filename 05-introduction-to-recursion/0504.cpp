// 22/05/06 = Fri

// Chapter 5 Introduction to Recursion

// 4. Write an iterative implementation of the function Fib(n).

// 0: iFib(0) = 0, rFib(0) = 0
// 1: iFib(1) = 1, rFib(1) = 1
// 2: iFib(2) = 1, rFib(2) = 1
// 3: iFib(3) = 2, rFib(3) = 2
// 4: iFib(4) = 3, rFib(4) = 3
// 5: iFib(5) = 5, rFib(5) = 5
// 6: iFib(6) = 8, rFib(6) = 8
// 7: iFib(7) = 13, rFib(7) = 13
// 8: iFib(8) = 21, rFib(8) = 21
// 9: iFib(9) = 34, rFib(9) = 34
// 10: iFib(10) = 55, rFib(10) = 55
// 11: iFib(11) = 89, rFib(11) = 89
// 12: iFib(12) = 144, rFib(12) = 144
// 13: iFib(13) = 233, rFib(13) = 233
// 14: iFib(14) = 377, rFib(14) = 377
// 15: iFib(15) = 610, rFib(15) = 610
// 16: iFib(16) = 987, rFib(16) = 987
// 17: iFib(17) = 1597, rFib(17) = 1597
// 18: iFib(18) = 2584, rFib(18) = 2584
// 19: iFib(19) = 4181, rFib(19) = 4181
// 20: iFib(20) = 6765, rFib(20) = 6765
// 21: iFib(21) = 10946, rFib(21) = 10946
// 22: iFib(22) = 17711, rFib(22) = 17711
// 23: iFib(23) = 28657, rFib(23) = 28657
// 24: iFib(24) = 46368, rFib(24) = 46368
// 25: iFib(25) = 75025, rFib(25) = 75025
// 26: iFib(26) = 121393, rFib(26) = 121393
// 27: iFib(27) = 196418, rFib(27) = 196418
// 28: iFib(28) = 317811, rFib(28) = 317811
// 29: iFib(29) = 514229, rFib(29) = 514229
// 30: iFib(30) = 832040, rFib(30) = 832040
// 31: iFib(31) = 1346269, rFib(31) = 1346269
// 32: iFib(32) = 2178309, rFib(32) = 2178309
// 33: iFib(33) = 3524578, rFib(33) = 3524578
// 34: iFib(34) = 5702887, rFib(34) = 5702887
// 35: iFib(35) = 9227465, rFib(35) = 9227465
// 36: iFib(36) = 14930352, rFib(36) = 14930352
// 37: iFib(37) = 24157817, rFib(37) = 24157817
// 38: iFib(38) = 39088169, rFib(38) = 39088169
// 39: iFib(39) = 63245986, rFib(39) = 63245986
// 40: iFib(40) = 102334155, rFib(40) = 102334155
// --- Test passed ---

#include <cassert>
#include <iostream>

int iFib(int n) {
  if (n < 2) {
    return n;
  }
  int prev2 = 0;
  int prev1 = 1;
  int res = 0;
  for (int i = 2; i <= n; ++i) {
    res = prev1 + prev2;
    prev2 = prev1;
    prev1 = res;
  }
  return res;
}

int rFib(int n) {
  if (n < 2) {
    return n;
  }
  return rFib(n - 1) + rFib(n - 2);
}

bool test() {
  for (int i = 0; i <= 40; ++i) {
    std::cout << i << ": ";
    int ires = iFib(i);
    std::cout << "iFib(" << i << ") = " << ires << ", ";
    int rres = rFib(i);
    std::cout << "rFib(" << i << ") = " << rres << std::endl;
    if (ires != rres) {
      std::cout << "Test failed with i = " << i << std::endl;
      return false;
    }
  }
  std::cout << "--- Test passed ---" << std::endl;
  return true;
}

int main() {
  assert(test());
  return 0;
}
