#include <iostream>
using namespace std;

// Time Complexity : O(√(N))
bool isPrime(int n) {
  if (n == 1)
    return true;
  for (int i = 2; n >= i * i; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  int a;
  cin >> a;
  cout << isPrime(a) << endl;
}