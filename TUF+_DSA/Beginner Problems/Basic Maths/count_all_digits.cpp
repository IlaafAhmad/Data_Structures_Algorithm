class Solution {
public:
    int countDigit(int n) {
        int digitCount = 0;
        if (n == 0) return 1;

        while (n > 0) {
            n = n / 10;
            digitCount = digitCount + 1;
        }   return digitCount;
    }
};
