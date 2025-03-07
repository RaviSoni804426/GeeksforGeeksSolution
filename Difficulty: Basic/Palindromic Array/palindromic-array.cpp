//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*Complete the function below*/

class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            int num=arr[i],temp=num;
           int revnum=0;
           while(temp>0){
               revnum=revnum*10+(temp%10);
               temp/=10;
           }
            if(num!=revnum){
                return false;
            }
        }
                return true;
            
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        cout << (ob.isPalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends