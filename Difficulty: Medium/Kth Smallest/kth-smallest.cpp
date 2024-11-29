//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
int kthSmallest(vector<int> &arr, int k) {
    int l = *min_element(arr.begin(), arr.end()); 
    int h = *max_element(arr.begin(), arr.end()); 
    
    while (l <= h) {
        int m = l + (h - l) / 2; 
        int count = 0;

        // Count elements smaller or equal to m
        for (int num : arr) {
            if (num <= m) count++;
        }

        if (count < k) {
            l = m + 1; // Move to the higher half
        } else {
            h = m - 1; // Move to the lower half
        }
    }

    return l; // The kth smallest element
}
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << ob.kthSmallest(arr, k) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends