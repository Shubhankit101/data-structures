#include <iostream>
#include <vector>
using namespace std;

// Naive Approach
// Time Complexity : O(N^2)
// Space Complexity : O(1)
int findOddOccourance(vector<int> v) {
  int n = v.size();
  for (int i = 0; n > i; i++) {
    int count = 0;
    for (int j = 0; n > j; j++) {
      if (v[i] == v[j])
        count++;
    }
    if (count % 2 != 0)
      return v[i];
  }
  return 0;
}

// Efficient Approach using XOR Operator
// Time Complexity : O(N)
// Space Complexity : O(1)
int findOddOccouranceEfficiently(vector<int> &v) {
  int n = v.size();
  int res = v[0];
  for (int i = 1; n > i; i++)
    res = res ^ v[i];
  return res;
}

int main() {
  vector<int> v = {4, 4, 7, 4, 8, 7, 7, 7, 8};
  cout << findOddOccouranceEfficiently(v);
}