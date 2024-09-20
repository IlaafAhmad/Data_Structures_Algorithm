class Solution {
public:
    int countOddDigit(int n) {
        int lastDigit;
        int oddNumber = 0;
        while (n > 0) {
            lastDigit = n % 10;
            if (lastDigit % 2 == 1) {
                oddNumber = oddNumber + 1;
            }
            n = n / 10;
        
        }
        return oddNumber;
    }
};
