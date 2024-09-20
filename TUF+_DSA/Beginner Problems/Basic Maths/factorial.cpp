class Solution {
public:
    int factorial(int n) {
        int factorialResult = 1;
        int number = n;
        for (int i = number; i >= 1 ; i--) {
            factorialResult = factorialResult * i;
        }
        return factorialResult;
    }
};
