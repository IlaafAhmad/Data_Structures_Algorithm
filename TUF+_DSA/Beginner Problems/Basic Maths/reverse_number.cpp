class Solution {
public:
    int reverseNumber(int n) {
        int lastDigit = 0;
        int newNumber = 0;
        while (n > 0) {
            lastDigit = n % 10;
            newNumber = newNumber * 10 + lastDigit;
            n = n / 10;
       
        }
        return newNumber;
    }
};
