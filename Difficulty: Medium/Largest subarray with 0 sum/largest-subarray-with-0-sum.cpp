/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mp;
        int maxi=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                maxi=i+1;
            }
            else{
                if(mp.find(sum)!=mp.end()){
                    maxi=max(maxi,i-mp[sum]);
                }
                else{
                    mp[sum]=i;
                }
            }
        }
        return maxi;
    }
};