#include<iostream>
using namespace std;
void selectionSort(int a[], int n)
{
    for(int i = 0; n > i; i++){
        for(int j = i + 1; n > j; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
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
/*
Input Array
6 
7 3 2 1 8 4
*/
//Basic intuition : Get the minimum value and swap it.
//Time Complexity = O(N^2) [Best Worst and Average]
//Space Complexity = O(1)