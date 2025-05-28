class Solution {
  public:
    void printGfg(int n) {
        // Code here
        if(n==0) return ;
        cout<<"GFG"<<" ";
        printGfg(n-1);
    }
};
