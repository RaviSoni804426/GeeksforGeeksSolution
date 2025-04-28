//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findMax(int n,vector<int>& a, vector<int>& b, vector<int>& k) {
        int m = a.size();
            vector<int>temp(n+1,0);
        for(int i=0;i<m;i++)
        {
            temp[a[i]]=temp[a[i]]+k[i];
            temp[b[i]+1]=temp[b[i]+1]-k[i];
        }
        
        int result=temp[0];
        for(int i=1;i<n;i++)
        {
            temp[i]=temp[i]+temp[i-1];
            result=max(result,temp[i]);
        }
        
        return result ;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string ns;
        getline(cin, ns);
        int n = stoi(ns);

        string line;
        getline(cin, line);
        stringstream ss1(line);
        vector<int> a;
        int num;
        while (ss1 >> num) {
            a.push_back(num);
        }

        getline(cin, line);
        stringstream ss2(line);
        vector<int> b;
        while (ss2 >> num) {
            b.push_back(num);
        }

        getline(cin, line);
        stringstream ss3(line);
        vector<int> k;
        while (ss3 >> num) {
            k.push_back(num);
        }

        Solution ob;
        cout << ob.findMax(n, a, b, k) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends