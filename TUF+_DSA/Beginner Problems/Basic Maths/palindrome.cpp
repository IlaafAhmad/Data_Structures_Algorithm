class Solution {
public:
    bool isPalindrome(int n) {
        int lastDigit = 0;
        int reversedNumber = 0;
        int originalNumber = n;
        while (originalNumber > 0) {
            lastDigit = originalNumber % 10;
            reversedNumber = reversedNumber * 10 + lastDigit;
            originalNumber = originalNumber / 10;
       
        }
        return reversedNumber == n;
    }
};
