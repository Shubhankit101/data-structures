#include<iostream>
using namespace std;
void insertionSort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        // Move elements of arr[0..i-1],
        // that are greater than key, 
        // to one position ahead of their
        // current position
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

//Driver Code
int main()
{
    int n; cin >> n;
    int a[n]; 
    for(int i = 0; n > i; i++) cin>>a[i]; 
    
    insertionSort(a, n);
    //Print the sorted array 
    for(int i = 0; n > i; i++){
        cout << a[i] <<" ";
    }
}
//Basic intuition : Compare two Adjacent elements and swap it.
//Time Complexity = O(N^2) [Worst and Average]. O(N) [Best - Array is already sorted]
//Space Complexity = O(1)