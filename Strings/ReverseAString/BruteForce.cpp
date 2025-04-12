#include<iostream>
#include<string>
using namespace std;

    void reverse(string &s){
        int n = s.size();

        //Declare a Stack
        stack<char> st;
        
        // Push the Characters in stack one by one.
        for(int i = 0; n > i; i++){
            st.push(s[i]);
        }

        //Get the top element from the Stack and insert it into the string

        for(int i = 0; n > i ;i++){
            s[i] = st.top(); // insert the top element 
            st.pop(); // Remove it afterwards
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