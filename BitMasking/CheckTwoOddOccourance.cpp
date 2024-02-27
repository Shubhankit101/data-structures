#include <iostream>
#include <vector>
using namespace std;

// Naive Approach
// Time Complexity : O(N^2)
// Space Complexity : O(1)
void findTwoOddOccurance(vector<int> v) {
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
// Efficient Approach using XOR Operation

// Initution: 
// 1. We do XOR opertaion on the whole array and find the number which is XOR of the required 
// two numbers.
// 2. Consider a set bit in this number 2 divide the array in 2 groups

void findTwoOddOccurrenceEfficiently(vector<int> v){
  int n = v.size();
  int x = v[0];

  for(int i = 1; n > i; i++){
    x = x ^ v[i];
  }
  int k = (x & (~ (x - 1)));
  int r1 = 0, r2 = 0;

  for(int i = 0; n > i; i++){
    if((v[i] & k) != 0)
      r1 = r1 ^ v[i];

    else 
      r2 = r2 ^ v[i];
  }
  cout<< r1 <<" "<< r2 <<endl;
  
}

int main() {
  vector<int> v = {1, 6, 5, 6, 6, 1};
  findTwoOddOccurrenceEfficiently(v);
}