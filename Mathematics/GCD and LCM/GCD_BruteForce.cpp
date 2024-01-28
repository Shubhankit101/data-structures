#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int sum = min(a, b);
  while (sum > 0) {
    if (a % sum == 0 && b % sum == 0) {
      break;
    }
    sum--;
  }
  cout << sum << endl;
}