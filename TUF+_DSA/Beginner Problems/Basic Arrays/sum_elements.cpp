class Solution{
public:
	int sum(int arr[], int n) {
		int sum = 0;
		for (int i = 0; i <= n - 1; i++) {
			sum = arr[i] + sum;
		}
		return sum;
	}
};
