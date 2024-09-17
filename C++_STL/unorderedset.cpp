#include <bits/stdc++.h>
    using namespace std;
    
    int main() {
        unordered_set<int> us;
        us.insert(10);
        us.insert(20);
        us.emplace(30); // Emplaces an element
        for(int x : us) {
            cout << x << " ";
        }
        return 0;
    }