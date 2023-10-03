#include<iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for(int i = 0; n - 2 >= i; i++){
        int min = i;
        for(int j = i; n - 1 >= j; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}
//Driver Code
int main()
{
    int n; cin >> n;
    int a[n]; 
    for(int i = 0; n > i; i++) cin>>a[i]; 

    selectionSort(a, n);

    //Print the sorted array 
    for(int i = 0; n > i; i++){
        cout << a[i] <<" ";
    }
}
//Basic intuition : Get the minimum value and swap it.
//Time Complexity = O(N^2) [Best Worst and Average]
//Space Complexity = O(1)