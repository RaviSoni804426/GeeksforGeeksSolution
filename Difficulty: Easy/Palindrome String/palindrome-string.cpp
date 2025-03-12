//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        if(s.empty()) return true;
        vector<int>v;
        for(auto ch:s){
            if(isalnum(ch)){
                v.push_back(tolower(ch));
            }
        }
        int begin=0;
        int end=v.size()-1;
        while(begin<end){
            if(v[begin]!=v[end]){
                return false;
            }
            begin++;
            end--;
        }
        return true;
    }
};


//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        string s;
        cin >> s; // Read the string

        Solution ob; // Create an instance of Solution
        if (ob.isPalindrome(s)) {
            cout << "true"; // Print true if palindrome
        } else {
            cout << "false"; // Print false if not a palindrome
        }
        cout << "\n~\n"; // Print newline after each result
    }

    return 0;
}

// } Driver Code Ends