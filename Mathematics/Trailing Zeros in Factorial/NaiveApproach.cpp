#include <iostream>
using namespace std;

// Naive Approach
// 1st Calculating Factorial then moving onto calulating Zeros
long long fact(int n) {
  long long sum = 1;
  for (int i = 1; n >= i; i++) {
    sum = sum * i;
  }
  return sum;
}
int calculateZeros(long long n) {
  int cnt = 0;
  while (n % 10 == 0) {
    cnt++;
    n /= 10;
  }
  return cnt;
}
// Overall time complexity
// T(N) : O(N)
int main() {

  int n;
  cin >> n;
  long long fct = fact(n);
  cout << calculateZeros(fct) << endl;
}