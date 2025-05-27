// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int t) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int x:arr){
            if(mp[t-x]) return true;
            mp[x]=1;
        }
        return false;
        
    }
};