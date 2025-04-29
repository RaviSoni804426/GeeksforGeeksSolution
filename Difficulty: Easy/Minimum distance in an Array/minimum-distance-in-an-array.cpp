//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        int n = arr.size();
        int min_distance = INT_MAX;
        int last_pos = -1;
        int last_val = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] == x || arr[i] == y) {
                if (last_pos != -1 && arr[i] != last_val) {
                    min_distance = min(min_distance, i - last_pos);
                }
                last_pos = i;
                last_val = arr[i];
            }
        }

        return (min_distance == INT_MAX) ? -1 : min_distance;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x, y;
        cin >> x >> y;
        cin.ignore();
        Solution obj;
        cout << obj.minDist(arr, x, y) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends