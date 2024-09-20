class Solution {
public:
    int largestDigit(int n) {
        int currentNumber = n;
        int largestDigit = 0;
        int lastDigit = 0;
        while (currentNumber > 0) {
            lastDigit = currentNumber % 10;
            if (lastDigit > largestDigit) {
                largestDigit = lastDigit;
            } 
            currentNumber = currentNumber / 10;
        }
        return largestDigit;
     }
};
