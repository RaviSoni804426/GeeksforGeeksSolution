//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findMinDiff(vector<int>& arr, int m) {
        // code here
        sort(arr.begin(), arr.end());
        
        int result = INT_MAX;
        
        for(int i = 0; i <= arr.size() - m; i++){
            result = min(result, arr[m+i-1] - arr[i]);
        }
        
        return result;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int m;
        cin >> m;
        cin.ignore();
        Solution ob;
        cout << ob.findMinDiff(arr, m) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends