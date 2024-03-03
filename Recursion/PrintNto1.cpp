#include <iostream>
using namespace std;
void printNto1(int n) {
  // Base Condition
  if (n == 0)
    return;

  // Printing before recusive call
  cout << n << " ";

  // Recusive call
  printNto1(n - 1);
}
int main() {
  int n;
  cin >> n;
  printNto1(n);
}