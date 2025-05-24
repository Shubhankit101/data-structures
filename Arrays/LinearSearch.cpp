#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key) {
  for (int i = 0; n > i; i++) {
    if (arr[i] == key) return i;
  }
  return -1;
}

int main() {
  // Linear Search: An algo which uses brute force to find the index of an given
  // array
  int arr[] = {1, 2, 0, 10, 11, 9, 8, 7};
  int key = 100;
  int n = sizeof(arr) / sizeof(int);
  int index = linear_search(arr, n, key);
  if (index == -1)
    cout << "Element not Found";
  else
    cout << "Index of the element: " << index;
}
