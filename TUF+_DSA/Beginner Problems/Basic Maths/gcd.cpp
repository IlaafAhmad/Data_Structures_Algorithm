class Solution {
public:
    int GCD(int n1,int n2) {
        int largest = 1;
        for (int i = 2; i <= min(n1, n2); i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                largest = i;
            }
        } return largest;
    }
};
