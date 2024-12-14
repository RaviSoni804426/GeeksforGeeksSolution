//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void reverse(queue<int>& q, int k) {
        stack<int> st;

       
        for (int i = 0; i < k; i++) {
            st.push(q.front());
            q.pop();
        }

        
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }

        
        int n = q.size();  
        for (int i = 0; i < n - k; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    
    queue<int> modifyQueue(queue<int> q, int k) {
        reverse(q, k); 
        return q;       
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends