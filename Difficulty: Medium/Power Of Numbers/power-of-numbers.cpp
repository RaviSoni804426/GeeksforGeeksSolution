#include <iostream>
#include <cmath> 

class Solution {
public:
    int reverseExponentiation(int n) {
        int reverse = 0;
        int originalNumber = n;

       
        while (n != 0) {
            int r = n % 10;
            reverse = reverse * 10 + r;
            n = n / 10;
        }

        
        return (int)pow(originalNumber, reverse);
    }
};
