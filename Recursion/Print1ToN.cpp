#include <iostream>
using namespace std;
void print1ToN(int n) {
  // Base Condition
  if (n == 0)
    return;

  // Recusive call
  print1ToN(n - 1);

  // Printing the data
  cout << n << " ";
}
int main() {
  int n;
  cin >> n;
  print1ToN(n);
}