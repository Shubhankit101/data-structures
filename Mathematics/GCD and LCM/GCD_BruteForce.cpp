#include <iostream>
using namespace std;
int gcd(int a, int b) {
  int sum = min(a, b);
  while (sum > 0) {
    if (a % sum == 0 && b % sum == 0) {
      break;
    }
    sum--;
  }
  return sum;
}
int main() {
  int a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;
}