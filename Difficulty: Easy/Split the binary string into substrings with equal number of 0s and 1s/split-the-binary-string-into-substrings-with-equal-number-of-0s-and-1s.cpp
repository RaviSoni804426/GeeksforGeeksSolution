//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int maxSubStr(string s){
    int n = s.size();
    int count0 = 0, count1 = 0, ans = 0;
    
    for (char ch : s) {
        if (ch == '0') count0++;
        else count1++;

        if (count0 == count1) ans++;
    }
    
 
    return (count0 != count1) ? -1 : ans;
}
};
 


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends