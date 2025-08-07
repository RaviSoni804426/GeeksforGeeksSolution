// User Function Template
class Solution {
  public:
    vector<int> closestPairSum(vector<int> &arr, int target) {
        // Code here
        vector<int>ans;
        int min=INT_MAX;
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        while(i<j){
            if(arr[i]+arr[j]==target){
               ans={arr[i],arr[j]}; 
               return ans;
            }
            else if((arr[i]+arr[j])>target){
               int  x=arr[i]+arr[j];
               if(min>abs(x-target))
                {ans={arr[i],arr[j]};
                min=abs(x-target);
            }
            j--;
            }
            else {int  x=arr[i]+arr[j];
                if(min>abs(x-target))
                 {ans={arr[i],arr[j]};
                min=abs(x-target); 
                 }
                 i++;
            
        }
        
        }
        return ans;
    
    }
};