#include<iostream>
#include<algorithm>
using namespace std; 

string largeOddNum(string& s){

    int j = -1; // ending index
    int si = 0;  // starting index 
    int n = s.size();
    //Figure out the last digit odd digit 

    for(int i = n - 1; i >= 0; i--){
       //if odd digit is found at the very end we will save the index
       if((s[i] - '0') % 2 == 1){
           j = i;
           break;
       }
    }

   if(j == -1) return "";

    // Figure out the starting index where any non zero value exist
   for(int i = 0; j >= i; i++){
       if(s[i] != '0') 
       {
           si = i;
           break;
       }
   }

   return s.substr(si, j - si + 1);

   }

int main(){

    string x = "35427";
    cout << "O/P: " << largeOddNum(x) << endl;
    return 0;

}