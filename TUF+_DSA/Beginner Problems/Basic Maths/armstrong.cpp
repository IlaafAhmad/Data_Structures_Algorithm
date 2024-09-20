class Solution {
public:
    bool isArmstrong(int n) {
        int copy = n;
        int number = n;
        int digitValue = 0;
        int numberOfDigits = 0;
        int sum = 0;

        while (copy > 0) {
            copy = copy / 10;
            numberOfDigits = numberOfDigits + 1;
        }
        
        while(number > 0) {
            digitValue = number % 10;
            sum = pow(digitValue, numberOfDigits) + sum;
            number = number / 10;
        }
        return (sum == n); 

    }
};
