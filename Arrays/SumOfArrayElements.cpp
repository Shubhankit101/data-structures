#include<iostream>
using namespace std; 

int sum(int arr[], int n){
    int result = 0; 
    for(int i = 0; n > i; i++){
        result = result + arr[i];
    }
    return result;
}

int main(){

    cout<<"Enter the size of the Array"<<endl;
    int n; 
    cin >> n;
    cout<<"Enter Array Elements"<<endl;
    int arr[n];
    for(int i = 0; n > i; i++){
        cin >> arr[i];
    }
    cout << "Sum of the elements is "<< sum(arr, n) << endl; 

    return 0;
}