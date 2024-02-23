#include <iostream>
using namespace std;
// Naive approach
// Time Complexity : O(n)
// Space Complexity: O(1)
int countSet(int n) {
  int x = 1;
  int cnt = 0;
  while (n > 0) {
    // Checking the left most bit
    if ((n & x) != 0) // If 1, meaning bit was set, hence we increase the count
                      // (n % 2 == 1)
      cnt++;
    n = n >> 1; // Right shifting 1 bit, Alternatively can be used n /= 2;
  }
  return cnt;
}
// Brian Kernighan’s Algorithm
// Time Complexity : O(x) where x is the number of Set bits
// Space Complexity : O(1)
int countSetOptimised(int n) {
  int cnt = 0;
  while (n > 0) {
    n = n & (n - 1);
    cnt++;
  }
  return cnt;
}
int main() {

  int n;
  // Enter the number n
  cin >> n;
  cout << countSetOptimised(n);
}