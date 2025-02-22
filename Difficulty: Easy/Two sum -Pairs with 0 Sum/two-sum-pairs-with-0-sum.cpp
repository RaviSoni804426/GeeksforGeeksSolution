//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;
        int left = 0, right = n - 1;
        while (left < right) {
            if (arr[left] + arr[right] < 0) {
                left++;
            } else if (arr[left] + arr[right] > 0) {
                right--;
            } else {
                result.push_back({arr[left], arr[right]});
                int tempLeft = left, tempRight = right;
                while (left < right && arr[left] == arr[tempLeft])
                    left++;
                while (left < right && arr[right] == arr[tempRight])
                    right--;
            }
        }

        return result;
    }
};


//{ Driver Code Starts.
//Back-end complete function Template for C++

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        // char c;cin>>c;
        Solution obj;
        vector<vector<int>> res = obj.getPairs(arr);
        if (res.size() == 0) {
            cout << endl;
        } else
            Matrix::print(res);
        cout << "~" << endl;
    }
}

// } Driver Code Ends