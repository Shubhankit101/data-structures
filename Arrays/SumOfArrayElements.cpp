#include<iostream>

using namespace std;

int sum(int arr[], int n) {
  //Initialise the result with 0 
  int result = 0;
  // Iterate through each element in the array
  for (int i = 0; n > i; i++) {
    // Add each element to the result
    result += arr[i];
  }
  return result;
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
  cout << "Sum of the elements is " << sum(arr, n) << endl;

  return 0;
}