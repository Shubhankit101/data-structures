#include<iostream>
using namespace std;
void bubbleSort(int a[], int n)
{
    bool isSwapped;
    for(int i = 0; n - 1 > i; i++){
        isSwapped = false;
        for(int j = 0; n - i - 1 > j; j++){
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                isSwapped = true;
            }
        }
        //No two elements are swapped in inner loop meaning
        //Array is already sorted.
        if(!isSwapped){
            break;
        }
    }
}
//Driver Code
int main()
{
    int n; cin >> n;
    int a[n]; 
    for(int i = 0; n > i; i++) cin>>a[i]; 

    bubbleSort(a, n);

    //Print the sorted array 
    for(int i = 0; n > i; i++){
        cout << a[i] <<" ";
    }
}
//Basic intuition : Compare two Adjacent elements and swap it.
//Time Complexity = O(N^2) [Worst and Average]. O(N) [Best - Array is already sorted]
//Space Complexity = O(1)