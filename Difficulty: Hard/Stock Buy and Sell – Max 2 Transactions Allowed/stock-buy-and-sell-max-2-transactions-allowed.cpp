//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxProfit(vector<int> &arr) {
        int n = arr.size();
        vector<int> profit(n, 0);
        int maxPrice = arr[n-1];

        for (int i = n-2; i >= 0; i--) {
            maxPrice = max(maxPrice, arr[i]);
            profit[i] = max(profit[i+1], maxPrice - arr[i]);
        }
        
        int res = 0, minPrice = arr[0];
        
        for (int i=1; i<n; i++) {
            minPrice = min(minPrice, arr[i]);
            res = max(res, profit[i] + (arr[i] - minPrice));
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends