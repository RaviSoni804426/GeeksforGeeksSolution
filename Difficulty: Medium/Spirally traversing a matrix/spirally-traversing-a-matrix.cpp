//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &m) {
        int r = m.size();
        int c = m[0].size();
        int left = 0, right = c - 1;
        int top = 0, bottom = r - 1;
        vector<int> ans;

        while (top <= bottom && left <= right) {
            // Traverse from left to right
            for (int i = left; i <= right; i++) {
                ans.push_back(m[top][i]);
            }
            top++;

            // Traverse from top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(m[i][right]);
            }
            right--;

            // Traverse from right to left (only if `top <= bottom`)
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(m[bottom][i]);
                }
                bottom--;
            }

            // Traverse from bottom to top (only if `left <= right`)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(m[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends