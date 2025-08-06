class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
         sort(arr.begin(),arr.end());
        int n=arr.size();
        int start=0,end=n-1;
        while(start<end)
        {
            if(arr[start]+arr[end]==target)
                return true;
            else if(arr[start]+arr[end]>target)
                end--;
            else
                start++;
        }
        return false;
    
    }
};