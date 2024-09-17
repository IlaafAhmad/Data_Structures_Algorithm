#include <iostream>
#include <vector>
        using namespace std;
        
        int main() {
            vector<int> v1 = {1, 2, 3};
            vector<int> v2 = {4, 5, 6};
            swap(v1, v2);
            for (int i : v1) {
                cout << i << " ";
            }
            return 0;
        }