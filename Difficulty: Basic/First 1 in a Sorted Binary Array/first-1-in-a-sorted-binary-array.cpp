#include <vector>
using namespace std;

class Solution {
public:
    int firstIndex(const vector<int>& arr) {
        long low  = 0;
        long high = static_cast<long>(arr.size()) - 1;

        while (low <= high) {
            long mid = low + (high - low) / 2;

            if (arr[mid] < 1) {
                low = mid + 1;
            } else if (arr[mid] > 1) {
                high = mid - 1;
            } else {                       
                if (mid == 0 || arr[mid - 1] != 1)
                    return static_cast<int>(mid);   
                high = mid - 1;           
            }
        }
        return -1;                        
    }
};
