#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter 1st Number" << endl;
  cin >> a;
  cout << "Enter 2nd Number" << endl;
  cin >> b;

  cout << "Choose Operation among & (AND), | (OR), ^ (XOR)" << endl;
  char c;
  cin >> c;

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
  }
}