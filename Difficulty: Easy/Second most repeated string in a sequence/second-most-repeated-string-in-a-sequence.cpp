//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
  unordered_map<string, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int first = 0, second = 0;
    string result = "";

    for (auto& entry : freq) {
        int count = entry.second;

        if (count > first) {
            second = first;
            first = count;
        } else if (count > second && count < first) {
            second = count;
        }
    }

    for (auto& entry : freq) {
        if (entry.second == second) {
            return entry.first;
        }
    }

    return "";

    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends