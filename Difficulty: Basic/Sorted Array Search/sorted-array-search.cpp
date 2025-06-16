class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        int low=0;
        int n = arr.size();
        int high = n-1;
        while(low<=high){
            int mid =(low+high)/2;
            if(arr[mid]==k)return true;
            if(arr[mid]<k){
                low =mid+1;
            }
            if(arr[mid]>k){
                high = mid-1;
            }
        }
        return false;
        
    }
};