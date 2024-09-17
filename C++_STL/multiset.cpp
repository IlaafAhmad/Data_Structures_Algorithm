#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.emplace(15); // Emplaces an element
    for(int x : s) {
        cout << x << " ";
    }
    return 0;
}