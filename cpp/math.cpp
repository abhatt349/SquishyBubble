#include <iostream>

int fact(int n) {
  if (n == 0) {
    return 1;
  }
  return n * fact(n-1);
}

int fib(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  int a = 1;
  int b = 1;
  while (n > 1) {
    b = a + b;
    a = b - a;
    n--;
  }
  return b;
}

int main() {
  for (int i = 0; i < 10; i++) {
    std::cout << i << " Fact: " << fact(i) << "\tFib: " << fib(i) << "\n";
  }
  return 0;
}
