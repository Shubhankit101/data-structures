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
    if ((n & x) != 0) // If not 0, meaning bit was set, hence we increase the count
      cnt++;
    n = n >> 1; // Right shifting 1 bit
  }
  return cnt;
}
int main() {

  int n;
  // Enter the number n
  cin >> n;
  cout << countSet(n);
}