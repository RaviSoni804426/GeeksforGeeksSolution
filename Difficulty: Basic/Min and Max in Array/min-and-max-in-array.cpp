//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C+

class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long> arr) {
        long long min = LLONG_MAX;
        long long max = LLONG_MIN;

        for (long long num : arr) { // Range-based for loop for simplicity
            if (num < min) min = num;
            if (num > max) max = num;
        }

        return {min, max}; // Return the pair of min and max
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