#include <iostream>
using namespace std;
void print1ToN(int n, int k) {
  // Base Condition
  if (n == 0)
    return;
  // Printing the data
  cout << k << " ";

  // Making Recusive call at the end.
  // Modern Compliers do tail call elimination which will take less time.
  print1ToN(n - 1, k + 1);
}
int main() {
  int n;
  cin >> n;
  print1ToN(n, 1);
}