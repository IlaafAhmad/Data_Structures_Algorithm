class Solution {
public:
    void pattern13(int n) {
        int num = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << num << " ";
                num = num + 1;
            }
            
            cout << endl;
        }
    }
};
