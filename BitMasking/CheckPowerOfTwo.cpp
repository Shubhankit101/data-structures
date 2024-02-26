#include <iostream>
using namespace std;
// Naive approach
bool isPow2(int n) {
  if (n == 0)
    return false;

  while (n > 1) {
    if (n % 2 != 0)
      return false;
    n = n / 2;
  }
  return true;
}

// Better Approach using Brian Kernighan’s Algorithm
bool isPow2Efficient(int n) {
  if (n == 0)
    return 0;

  return ((n & (n - 1)) == 0);
}
int main() {

  int n;
  // Enter the number n
  cin >> n;
  cout << isPow2Efficient(n);
}  