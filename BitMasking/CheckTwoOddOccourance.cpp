#include <iostream>
#include <vector>
using namespace std;

// Naive Approach
// Time Complexity : O(N^2)
// Space Complexity : O(1)
void findTwoOddOccourance(vector<int> v) {
  int n = v.size();
  for (int i = 0; n > i; i++) {
    int cnt = 0;
    for (int j = 0; n > j; j++) {
      if (v[i] == v[j])
        cnt++;
    }
    if (cnt % 2 != 0)
      cout << v[i] << " ";
  }
}

int main() {
  vector<int> v = {10, 3, 3, 5};
  findTwoOddOccourance(v);
}