class Solution{
public:
    int countOdd(int arr[], int n){
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 1) {
                count = count + 1;
            }
        } return count;
    }
};
