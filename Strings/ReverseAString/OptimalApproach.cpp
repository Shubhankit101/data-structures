#include<iostream>
#include<string>
#include<stack>
using namespace std;

    void reverse(string &s){
        int n = s.size();
        //Iterate till mid and swap the postions
        for(int i = 0; n / 2 > i; i++){
            swap(s[i], s[n-i-1]);
        }
    }
// The main Function
int main() {

  string s;
  cout << "Enter a string" << endl;

  cin >> s;
  reverse(s);
  cout << s;
  return 0;
}
//Time Complexity : O(N)
//Space Complexity : O(1)