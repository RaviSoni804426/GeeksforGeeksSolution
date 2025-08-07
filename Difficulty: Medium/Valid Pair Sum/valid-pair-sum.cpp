// User function Template for C++

class Solution {

  public:
    long long ValidPair(int arr[], int n) {
        // Your code goes here
         sort(arr,arr+n);
   long long i=0,j=n-1,ct=0;
   while(i<j){
       if(arr[j]+arr[i]>0){
           ct+=(j-i);
           j--;
       }
       else i++;
   }
   return ct;
   }  

};