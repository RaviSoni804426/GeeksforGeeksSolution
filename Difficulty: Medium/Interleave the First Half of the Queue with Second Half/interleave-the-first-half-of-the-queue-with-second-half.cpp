//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeQueue(queue<int> &q) {
        stack<int> st;
        int n = q.size();

        
        for (int i = 0; i < n / 2; i++) {
            st.push(q.front());
            q.pop();
        }

        // Step 2: Push the elements from the stack back to the queue
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }

        // Step 3: Move the second half of the queue to the back
        for (int i = 0; i < n / 2; i++) {
            q.push(q.front());
            q.pop();
        }

        // Step 4: Push the first half of the queue into the stack again
        for (int i = 0; i < n / 2; i++) {
            st.push(q.front());
            q.pop();
        }

        // Step 5: Alternate elements from the stack and the queue
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }

        // Store the rearranged queue elements in a vector
        vector<int> result;
        while (!q.empty()) {
            result.push_back(q.front());
            q.pop();
        }

        return result;
    }
};



//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    
cout << "~" << "\n";
}
    
    return 0;
}
// } Driver Code Ends