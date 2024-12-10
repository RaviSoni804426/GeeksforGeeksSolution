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
    vector<int> leftSmaller(int n, int a[]) {
        stack<int> st;
        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {
           
            while (!st.empty() && st.top() >= a[i]) {
                st.pop();
            }
           
            if (!st.empty()) {
                ans[i] = st.top();
            }
            
            st.push(a[i]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends