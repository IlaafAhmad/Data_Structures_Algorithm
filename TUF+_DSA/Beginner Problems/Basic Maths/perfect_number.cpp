class Solution {
public:
    bool isPerfect(int n) {
        int number = n;
        int sum = 0;
        for (int i = 1; i < number; i++) {
            if (number % i == 0) {
                sum = sum + i;
            }
        }
        return (sum == n);
    }
};
