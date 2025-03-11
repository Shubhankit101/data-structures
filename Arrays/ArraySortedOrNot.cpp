#include<iostream>

using namespace std;

int arraySortedOrNot(int arr[], int n) {
    bool isSorted = false;
    // Iterate through each element
    for(int i = 0; n - 1 > i; i++){
        
        // If any element is out of order, return false
        if(arr[i] > arr[i + 1]){
            return isSorted;
        }
    }
    // All elements are in order
    return true;
}

// The main Function
int main() {

  cout << "Enter the size of the Array" << endl;
  int n;
  cin >> n;
  cout << "Enter Array Elements" << endl;
  int arr[n];
  for (int i = 0; n > i; i++) {
    cin >> arr[i];
  }
  cout << "Is Array sorted " << arraySortedOrNot(arr, n) << endl;

  return 0;
}