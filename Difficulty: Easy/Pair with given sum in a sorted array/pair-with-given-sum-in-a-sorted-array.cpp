class Solution {
public:
    int countPairs(vector<int> &arr, int target) {
         int n = arr.size();
        unordered_map<int,int>mp;
        int count = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(mp.find(target-arr[i])!=mp.end()){
                count += mp[target-arr[i]];
            }
            mp[arr[i]]++;
        }
        return count;
    }
};
