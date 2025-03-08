#include<iostream>

using namespace std;

int arraySortedOrNot(int arr[], int n) {
    bool isSorted = false;
    for(int i = 0; n - 1 > i; i++){
        if(arr[i] > arr[i + 1]){
            return isSorted;
        }
    }
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