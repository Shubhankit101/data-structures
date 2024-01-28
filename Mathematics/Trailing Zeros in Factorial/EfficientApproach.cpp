#include <iostream>
using namespace std;

// Efficient Approach
// Calculating the amount of pair of factors of 5 and 2. Since 0 comes as a
// combination of 5 * 2. Amount if 5 will always be less than 2.
// Used Formula: (n/5) + (n/25) + (n/125)
int calculateZeros(int n) {
  int res = 0;
  for (int i = 5; n >= i; i = i * 5) {
    res = res + (n / i);
  }
  return res;
}

// Overall time complexity
// T(N) : O(Log5(n))
int main() {
  int n;
  cin >> n;
  cout << calculateZeros(n) << endl;
}