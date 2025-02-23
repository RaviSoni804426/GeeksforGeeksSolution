//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    void rearrange(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        
        vector<int> pos, neg;
        
        for (int num : arr) {
            if (num >= 0) pos.push_back(num);
            else neg.push_back(num);
        }
        
        int i = 0, j = 0;
        while (i < pos.size() || j < neg.size()) {
            if (i < pos.size()) ans.push_back(pos[i++]);
            if (j < neg.size()) ans.push_back(neg[j++]);
        }
        
        for (int k = 0; k < n; k++) {
            arr[k] = ans[k];
        }
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends