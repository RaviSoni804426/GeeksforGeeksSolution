class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
           return (((n>>k) & 1) ==0) ? false : true;
    }
};
    