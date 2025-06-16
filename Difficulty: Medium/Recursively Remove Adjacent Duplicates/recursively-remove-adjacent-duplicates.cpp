#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeUtil(string s) {         
        string res;                        
        int n = s.size();
        bool anyDup = false;             

        for (int i = 0; i < n; ) {
            
            int j = i;
            while (j + 1 < n && s[j + 1] == s[i]) ++j;

            if (j == i) {                  
                res.push_back(s[i]);
            } else {                       
                anyDup = true;
            }

            i = j + 1;                    
        }

      
        return anyDup ? removeUtil(res) : res;
    }
};

