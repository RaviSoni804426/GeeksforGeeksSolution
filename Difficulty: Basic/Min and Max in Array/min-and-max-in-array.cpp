//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        int n = arr.size();
        long long mn = 1e18, mx = -1;

        // Iterating over the array
        for (int i = 0; i < n; i++) {

            // Updating the minimum value
            mn = min(arr[i], mn);

            // Updating the maximum value
            mx = max(arr[i], mx);
        }

        // Returning the minimum and maximum values as a pair
        return {mn, mx};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends