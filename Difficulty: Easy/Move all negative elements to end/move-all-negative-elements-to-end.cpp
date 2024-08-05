//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
    vector<int> temp;
  for(int i=0;i<arr.size();++i)
 {
     if(arr[i]>=0)
     temp.push_back(arr[i]);
 }
   
   for(int i=0;i<arr.size();++i)
   {
       if(arr[i]<0)
       temp.push_back(arr[i]);
       
   }
   for(int i=0;i<arr.size();++i)
   {
       arr[i]=temp[i];
   }

    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << endl;
    }
}
// } Driver Code Ends