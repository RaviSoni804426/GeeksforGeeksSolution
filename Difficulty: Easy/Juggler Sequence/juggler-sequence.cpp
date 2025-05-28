class Solution {
public:
    void find(long long n, vector<long long>& ans) {
        if (n == 1) return;

        if (n % 2 == 0) {
            n = (long long)pow(n, 0.5);  
        } else {
            n = (long long)pow(n, 1.5);  
        }

        ans.push_back(n);
        find(n, ans);
    }

    vector<long long> jugglerSequence(long long n) {
        vector<long long> ans;
        ans.push_back(n);
        find(n, ans);
        return ans;
    }
};