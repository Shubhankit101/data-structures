#include <iostream>
using namespace std;

// Time Complexity : O(n)
long long calculatePower(int a, int n) {
  long long res = 1;
  for (int i = 0; n > i; i++) {
    res = res * a;
  }
  return res;
}
int main() {
  int a, n;
  cin >> a >> n;
  cout << calculatePower(a, n) << endl;
}