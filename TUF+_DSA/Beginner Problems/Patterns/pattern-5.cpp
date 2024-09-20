class Solution {
public:
    void pattern5(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i ; j++ ) {
                cout << "*";
            }
            cout << endl;
        }
    }
};
