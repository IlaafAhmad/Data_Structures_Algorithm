class Solution {
public:
    int LCM(int n1,int n2) {
        int maxNumber = max(n1, n2);
        int i = 1;
        int multiple = 1;
        do {
            multiple = maxNumber*i;
            if (multiple % n1 == 0 && multiple % n2 == 0) {
                return multiple;
            }
            i = i + 1;
        } while (i);
    }
};
