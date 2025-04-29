//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <vector>
using namespace std;

class Solution {
public:
    bool canSplit(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        if (sum % 2 != 0) return false; 
        
        int k = sum / 2;
        int sum1 = 0;
        
        for (int i = 0; i < n; i++) {
            sum1 += arr[i];
            if (sum1 == k) {
                return true; 
            }
        }
    
        return false; 
    }
};





//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends