//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> result;
        queue<int> q;
        
        for (int i = 0; i < n; i++) {
            
            if (arr[i] < 0) q.push(i);
            
            
            if (i >= k - 1) {
              
                while (!q.empty() && q.front() < i - k + 1) {
                    q.pop();
                }
                if (q.empty()) result.push_back(0);
                else result.push_back(arr[q.front()]);
            }
        }
        
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends