#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxParts(int n, int a, int b, int c){
    //Base cases 
    if (n == 0) return 0;
    if (n < 0) return -1;
    
    //Recursive Condition
    int resA = maxParts(n - a, a, b, c);
    int resB = maxParts(n - b, a, b, c);
    int resC = maxParts(n - c, a, b, c);
    
    int result = max({resA, resB, resC});
    if(result == -1) return -1;

    return result + 1; 
}

int main() {
    int n, a, b, c;
    //Sample Test Case : 23, 11, 9, 12
    cin>> n >> a >> b >> c;
    cout<<maxParts(n, a, b, c)<<endl;
}
