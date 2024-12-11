//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
     stack<char>st;
     st.push(s[0]);
     for(int i=1;i<s.length();i++){
         if(s[i]!=st.top()) st.push(s[i]);
     }
     s=" ";
     while(st.size()>0){
         s+=st.top();
         st.pop();
     }
     reverse(s.begin(),s.end());
     return s;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    
cout << "~" << "\n";
}
} 




// } Driver Code Ends