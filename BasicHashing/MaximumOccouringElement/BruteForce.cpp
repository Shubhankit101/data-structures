#include<iostream>

using namespace std;

int mostFrequentElement(vector<int>& nums) {
        
    //Size of an Array
    int n = nums.size();

    // To store maximum Frequency
    int maxFrequency = 0;

    // To store the max element
    int maxElement = 0;

    // Creating a visting array and initalising all of it as false
    vector<bool> isVisited(n, false);

    for(int i = 0; n > i; i++){
        
        if(isVisited[i]) continue; //If true then skip it.

        int freq = 0;

        for(int j = 0; n > j; j++){
            if(nums[i] == nums[j]){
                freq++;
                isVisited[j] = true;
            }
        }
        if(freq > maxFrequency){
            maxFrequency = freq;
            maxElement = nums[i];
        }
        else if(freq == maxFrequency){
            maxElement = min(maxElement, nums[i]);
        }
    }

    return maxElement;
}

// The main Function
int main() {

  cout << "Enter the size of the Array" << endl;
  int n;
  cin >> n;
  cout << "Enter Array Elements" << endl;
  vector<int> nums;
  for (int i = 0; n > i; i++) {
    int val;
    cin >> val;
    nums.emplace_back(val);
  }
  int maximum = mostFrequentElement(nums);

  cout<< "The maximum number of elemetns is "<< maximum << endl;
  

  return 0;
}