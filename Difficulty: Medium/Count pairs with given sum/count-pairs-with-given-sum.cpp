class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
         unordered_map<int,int> mp;
        int ans = 0;
        for(auto & i : arr){
            
            if(mp.find(target-i) != mp.end()){
                ans+=mp[target-i];
            }
            mp[i]++;
        }
        return ans;
    }
};
    