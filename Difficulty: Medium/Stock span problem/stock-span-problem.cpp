//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    
    vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();
        vector<int> pgi(n); 
        vector<int> span(n); 
        stack<int> st;

        for (int i = 0; i < n; i++) {
           
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            
            if (st.empty()) {
                pgi[i] = -1;
            } else {
                pgi[i] = st.top();
            }
            
            st.push(i);
        }

       
        for (int i = 0; i < n; i++) {
            span[i] = i - pgi[i];
        }

        return span;
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
        Solution obj;
        vector<int> ans = obj.calculateSpan(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends