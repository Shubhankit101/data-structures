#include <iostream>
using namespace std;

// Time Complexity : O(b)
long long calculatePower(int a, int b) {
  long long res = 1;
  for (int i = 0; b > i; i++) {
    res = res * a;
  }
  return res;
}
int main() {
  int a, b;
  cin >> a >> b;
  cout << calculatePower(a, b) << endl;
}