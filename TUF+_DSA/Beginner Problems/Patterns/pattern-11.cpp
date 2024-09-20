class Solution {
public:
    void pattern11(int n) {
        int start;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                start = 1;
            }
            else start = 0;

            for (int j = 0; j <= i; j++) {
                cout << start << " ";
                start = 1 - start;
            }
            cout << endl;
        }
    }
};
