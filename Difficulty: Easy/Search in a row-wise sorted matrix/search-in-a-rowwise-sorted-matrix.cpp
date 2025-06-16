

class Solution {
  public:
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
         if(mat[i][0]==x || mat[i][m-1]==x) return true;
            if(mat[i][0]<x && mat[i][m-1]>x){
               int s =0;
               int e= m-1;
               int mid= (s+e)/2;
               
               while(e>=s){
                   if(x==mat[i][mid]){
                       return true;
                   }
                   else if(x>mat[i][mid]){
                       s=mid+1;
                   }
                   else{
                       e=mid-1;
                   }
                   mid= (s+e)/2;
               }
            }
           
           
        }
        
        return false;
    }
};

