#include <iostream>
using namespace std;
//Time Complexity : T(O(max(a,b)))
int lcm(int a, int b) {
  int res = max(a, b);
  while (true) {
    if (res % a == 0 && res % b == 0)
      break;
    else
      res++;
  }
  return res;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << lcm(a, b) << endl;
}