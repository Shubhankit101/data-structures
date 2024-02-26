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

int main() {
  vector<int> v = {1, 1, 2, 2, 2, 1, 2, 7, 7, 9, 9, 9, 10, 10};
  cout << findOddOccourance(v);
}