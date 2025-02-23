//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n=arr.size();
        int ans=0;
        int c=n/k;
     unordered_map<int,int>mp;
     for(int i:arr){
         mp[i]++;}
     for (auto& it : mp) {
           if (it.second > c) {
                ans++;
            }
        }
     return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.countOccurence(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends