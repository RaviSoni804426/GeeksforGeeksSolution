//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> stackA;
        int n=s.size();
        for(int i=0;i<n;i++){
            char ch=s[i];
        
        if(ch=='(' || ch=='{' || ch=='['){
            stackA.push(ch);
        }
        else{
          
            if(!stackA.empty()){
                char top=stackA.top();
                if( (ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
                    stackA.pop();
                } else{
                    return false;
                }
            }
            else{
                return false;
            }
        } 
    }
    if(stackA.empty()){
            return true;  
        }else{
            return false;
        }
    }   
};


//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends