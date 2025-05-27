//Back-end complete function template for C++

class Solution {
public:
    int distinctCount(vector<int>& arr) {
        unordered_set<int> seen;
        for (int num : arr) {
            if (num > 0) {
                seen.insert(num);
            }
        }
        return seen.size();
    }
};
