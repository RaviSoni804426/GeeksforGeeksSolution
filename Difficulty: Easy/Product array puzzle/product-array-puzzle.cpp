//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// User function template for C++

using ll = long long;
class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
    
        int n = nums.size();
        vector<ll> prefProd(n), ans(n);
        prefProd[0] = nums.front();
        for(int i = 1; i < n; i++) {
            prefProd[i] = prefProd[i - 1] * nums[i];
        }
        
        ll suffProd = 1;
        for(int i = n - 1; i >= 0; i--) {
            if(i > 0) {
                ans[i] = prefProd[i - 1] * suffProd; 
            }
            else {
                ans[i] = suffProd;
            }
            suffProd *= nums[i];
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends