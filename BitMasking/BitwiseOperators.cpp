#include <iostream>
using namespace std;
void calculate(int a, int b, char c) {
  switch (c) {
  case '&':
    cout << (a & b) << endl;
    break;

  case '|':
    cout << (a | b) << endl;
    break;

  case '^':
    cout << (a ^ b);
    break;

  default:
    cout << "Invalid Operator" << endl;
    break;
  }
}

int main() {
  int a, b;
  cout << "Enter 1st Number" << endl;
  cin >> a;
  cout << "Enter 2nd Number" << endl;
  cin >> b;
  cout << "Choose Operation among & (AND), | (OR), ^ (XOR)" << endl;
  char c;
  cin >> c;
  // Function to Calculate the Bitwise Operator
  calculate(a, b, c);
}