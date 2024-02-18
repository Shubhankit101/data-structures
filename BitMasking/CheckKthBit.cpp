#include <iostream>
using namespace std;

void isKthBitSet(int n, int k) {
  int x = 1 << (k - 1);
  if ((n & x) != 0)
    cout << "Yes";
  else
    cout << "No";
}

int main() {

  int n, k;
  // Enter the number n and k
  cin >> n >> k;
  isKthBitSet(n, k);
}