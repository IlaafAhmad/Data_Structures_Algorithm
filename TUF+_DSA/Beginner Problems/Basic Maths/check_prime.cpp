class Solution {
public:
    bool isPrime(int n) {
        int number = n;
        
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) return false;
        }
        return true;
    }
};
